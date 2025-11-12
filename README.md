2025 Avionics ROS2 Drone GCS Project
====================================

ROS 2 + PX4 SITL + rosbridge + React GCS로 다중 드론 임무 계획/모니터링을 실험·검증하는 프로젝트입니다.
DDS/RTPS를 활용해 시뮬레이터와 웹 UI 간 양방향 실시간 통신을 구현합니다.

목표
----
물리 기체 없이도 멀티드론 운용 파이프라인(계획 → 제어 → 상태 수집 → 시각화)을 재현하고,
초보자도 접근 가능한 브라우저 기반 GCS 경험을 제공합니다.

주요 기능
--------
- PX4 SITL 다중 인스턴스 구동 (네임스페이스: px4_0, px4_1, …)
- ROS 2 노드
  * px4_status_node: 배터리/자세/속도/모드 등 상태 취합 → /gcs/ui_status Publish
  * px4_control_node: 이륙/목표고도/웨이포인트/RTL 등 제어 명령 처리
  * ui_bridge_node: 웹 UI ↔ ROS 2 메시지 브리지(WebSocket)
- rosbridge로 웹 UI(React)와 ROS 2 통신 (WebSocket)
- 미션 실행 제어: 시작 / 일시정지 / 재개 / 비상복귀, 마지막 웨이포인트 착륙 / 홈 리턴 옵션
- 멀티드론 간 간격 운용: 시간/거리 기반 간격, 순차 이륙, ID 순서 정렬

저장소 구조(예시)
-----------------
ros2_px4_ws/
├─ src/
│  ├─ px4_interface/      # (예시) 공용 msg/srv 필요 시
│  ├─ px4_sim_cpp/        # C++ 노드: control/status 등
│  ├─ px4_sim_py/         # Python 노드: aggregator/bridge 등
│  └─ px4_msgs/           # PX4 메시지 (서브모듈 or 벤더링 중 택1)
├─ build/                 # colcon 빌드 산출물
├─ install/               # colcon 빌드 산출물
├─ log/                   # colcon 로그
└─ README.md

※ src/px4_msgs는 서브모듈(권장) 또는 벤더링(복사) 중 하나를 선택합니다. 아래 “px4_msgs 관리” 참조.

사전 요구사항
------------
- Ubuntu 22.04 (Server 가능)
- ROS 2 Humble
- PX4-Autopilot (SITL)
- rosbridge_suite
- (선택) micro-XRCE Agent
- Git, Git LFS(대용량 자산 시), GitHub CLI(선택)

설치 예시
---------
# 시스템 업데이트
sudo apt update

# Git / gh / LFS
sudo apt install -y git gh git-lfs
git lfs install

# rosbridge (ROS2)
sudo apt install -y ros-humble-rosbridge-server

# (선택) micro XRCE Agent
sudo apt install -y micro-xrce-dds-agent

의존성 가져오기
--------------
# 저장소 클론 (서브모듈 포함)
git clone --recursive git@github.com:unLIMited72/2025_Avionics_ROS2-Drone-GCS-Project.git
cd 2025_Avionics_ROS2-Drone-GCS-Project

# (만약 --recursive를 깜빡했다면)
git submodule update --init --recursive

px4_msgs 관리(중요)
------------------
A) 서브모듈(권장): 외부 리포를 추적해 최신 메시지 스키마 유지.
# 잘못 추가되어 있으면 인덱스에서 제거 (파일은 유지)
git rm -r --cached src/px4_msgs

# 서브모듈로 재추가 (브랜치 지정 가능: -b main)
git submodule add https://github.com/PX4/px4_msgs.git src/px4_msgs
git commit -m "add px4_msgs as submodule"

B) 벤더링(고정 포함): 외부 추적 없이 현재 버전만 리포에 포함.
rm -rf src/px4_msgs/.git
git add -A
git commit -m "vendor px4_msgs into repo"

빌드
----
# ROS2 환경 설정
source /opt/ros/humble/setup.bash

# (필요 시) px4_msgs만 선빌드
colcon build --packages-select px4_msgs --symlink-install

# 전체 빌드
colcon build --symlink-install

# 오버레이 적용
source install/setup.bash

실행 (단일 드론 예시)
---------------------
1) PX4 SITL 실행 (PX4-Autopilot 디렉토리, 예: gz_x500)
PX4_SYS_AUTOSTART=4001 PX4_UXRCE_DDS_NS=px4_0 PX4_SIM_MODEL=gz_x500 ./build/px4_sitl_default/bin/px4 -i 0

2) (선택) micro XRCE Agent
MicroXRCEAgent udp4 -p 8888 -v

3) rosbridge 서버
ros2 launch rosbridge_server rosbridge_websocket_launch.xml
# 기본: ws://localhost:9090

4) 프로젝트 노드 실행
# 상태 집계
ros2 run px4_sim_py px4_status_aggregator

# 제어 노드 (이륙/목표고도/RTL/웨이포인트 등)
ros2 run px4_sim_cpp px4_control_node

# UI 브리지 (WebSocket <-> ROS2)
ros2 run px4_sim_py ui_bridge_node

다중 드론(SITL) 예시
-------------------
다중 인스턴스는 서로 다른 -i / 네임스페이스로 띄웁니다.

# 인스턴스 0
PX4_SYS_AUTOSTART=4001 PX4_UXRCE_DDS_NS=px4_0 PX4_SIM_MODEL=gz_x500 ./build/px4_sitl_default/bin/px4 -i 0

# 인스턴스 1 (예: 위치 오프셋)
PX4_GZ_STANDALONE=1 PX4_SYS_AUTOSTART=4001 PX4_UXRCE_DDS_NS=px4_1 PX4_GZ_MODEL_POSE="0,3,0" PX4_SIM_MODEL=gz_x500 ./build/px4_sitl_default/bin/px4 -i 1

# 인스턴스 2 (또는 추가)
PX4_GZ_STANDALONE=1 PX4_SYS_AUTOSTART=4001 PX4_UXRCE_DDS_NS=px4_2 PX4_GZ_MODEL_POSE="3,0,0" PX4_SIM_MODEL=gz_x500 ./build/px4_sitl_default/bin/px4 -i 2

네임스페이스 예
--------------
- 상태 토픽: /px4_0/fmu/out/vehicle_status_v1, /px4_1/...
- 제어/미션: /px4_0/..., /px4_1/...

웹 UI(React, 선택)
------------------
- rosbridge WebSocket 주소: ws(s)://<server-or-domain>:9090
- 실시간 지도 표시는 /gcs/ui_status 구독
- 명령 송신은 ui_bridge_node가 제공하는 토픽/서비스 인터페이스 사용
- 외부 접속 시 ngrok / 역방향 프록시 / 포트 포워딩 활용 가능
- 인증·접속제한: 서버 측 1인 동시 접속 제한 로직 권장

환경 변수 / 설정 팁
-------------------
- PX4_UXRCE_DDS_NS=px4_<index> : PX4 네임스페이스 설정
- PX4_GZ_MODEL_POSE="x,y,z"    : Gazebo 스폰 오프셋
- RMW_IMPLEMENTATION=rmw_fastrtps_cpp : 필요 시 RMW 지정
- UI 연결 주소는 .env 또는 설정 파일로 분리 관리

.gitignore 권장
---------------
build/
install/
log/
.colcon/
.vscode/
.idea/
*.swp
*.pyc
.DS_Store

# 대용량 데이터(영상/모델)는 Git LFS 사용 권장
git lfs track "*.mp4" "*.png" "*.pt"

기본 검증 시나리오
------------------
1) SITL 1기 띄우기 → /gcs/ui_status에서 배터리/자세/고도 수신 확인
2) px4_control_node로 이륙/목표고도 명령 → 실시간 고도/모드 변화 확인
3) 멀티드론 2기 이상 띄우기 → 간격/순차 이륙/RTL 시나리오 검증
4) UI에서 미션 편집 → 즉시 반영(웨이포인트 수정/삭제/재개)

트러블슈팅
----------
- QoS 불일치 경고: PX4 토픽은 BestEffort가 많습니다. 구독자 QoS를 best_effort()로 맞추세요.
- Agent 연결 안 됨: PX4 콘솔에서 uxrce_dds_client status로 에이전트/포트 확인(기본 UDP 8888).
- 빌드 꼬임/재빌드:
  rm -rf build install log
  colcon build --symlink-install
- 서브모듈 누락:
  git submodule update --init --recursive

로드맵(예시)
-----------
- 미션 편집 UI 고도화(폴리곤 커버리지, 경로 최적화)
- 상태/미션 QoS 프로파일 표준화
- 실기체(HITL/실드론) 연동
- 다중 사용자 동시접속 제어(락/Queue) 및 감사 로그

Contributing
------------
PR/이슈 환영합니다! 코딩 스타일/브랜치 전략은 추후 문서화 예정입니다.

라이선스
--------
MIT © 2025 Lim SeoungJun

감사
----
- PX4, ROS 2, rosbridge 커뮤니티
- 한서대학교 항공전자/항공소프트웨어 학우 여러분

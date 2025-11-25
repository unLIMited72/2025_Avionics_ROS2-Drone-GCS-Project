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

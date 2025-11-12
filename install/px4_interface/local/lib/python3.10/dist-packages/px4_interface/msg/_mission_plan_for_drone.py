# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_interface:msg/MissionPlanForDrone.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionPlanForDrone(type):
    """Metaclass of message 'MissionPlanForDrone'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LANDING_HOME': 0,
        'LANDING_LAST_WAYPOINT': 1,
        'SPACING_DISTANCE': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_interface.msg.MissionPlanForDrone')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_plan_for_drone
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_plan_for_drone
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_plan_for_drone
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_plan_for_drone
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_plan_for_drone

            from px4_interface.msg import MissionWaypoint
            if MissionWaypoint.__class__._TYPE_SUPPORT is None:
                MissionWaypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LANDING_HOME': cls.__constants['LANDING_HOME'],
            'LANDING_LAST_WAYPOINT': cls.__constants['LANDING_LAST_WAYPOINT'],
            'SPACING_DISTANCE': cls.__constants['SPACING_DISTANCE'],
        }

    @property
    def LANDING_HOME(self):
        """Message constant 'LANDING_HOME'."""
        return Metaclass_MissionPlanForDrone.__constants['LANDING_HOME']

    @property
    def LANDING_LAST_WAYPOINT(self):
        """Message constant 'LANDING_LAST_WAYPOINT'."""
        return Metaclass_MissionPlanForDrone.__constants['LANDING_LAST_WAYPOINT']

    @property
    def SPACING_DISTANCE(self):
        """Message constant 'SPACING_DISTANCE'."""
        return Metaclass_MissionPlanForDrone.__constants['SPACING_DISTANCE']


class MissionPlanForDrone(metaclass=Metaclass_MissionPlanForDrone):
    """
    Message class 'MissionPlanForDrone'.

    Constants:
      LANDING_HOME
      LANDING_LAST_WAYPOINT
      SPACING_DISTANCE
    """

    __slots__ = [
        '_mission_id',
        '_drone_id',
        '_waypoints',
        '_cruise_altitude_m',
        '_cruise_speed_mps',
        '_landing_mode',
        '_spacing_type',
        '_spacing_value',
        '_sequential_launch',
        '_order_by_id',
        '_heading_to_next_wp',
    ]

    _fields_and_field_types = {
        'mission_id': 'string',
        'drone_id': 'string',
        'waypoints': 'sequence<px4_interface/MissionWaypoint>',
        'cruise_altitude_m': 'float',
        'cruise_speed_mps': 'float',
        'landing_mode': 'uint8',
        'spacing_type': 'uint8',
        'spacing_value': 'float',
        'sequential_launch': 'boolean',
        'order_by_id': 'boolean',
        'heading_to_next_wp': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['px4_interface', 'msg'], 'MissionWaypoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_id = kwargs.get('mission_id', str())
        self.drone_id = kwargs.get('drone_id', str())
        self.waypoints = kwargs.get('waypoints', [])
        self.cruise_altitude_m = kwargs.get('cruise_altitude_m', float())
        self.cruise_speed_mps = kwargs.get('cruise_speed_mps', float())
        self.landing_mode = kwargs.get('landing_mode', int())
        self.spacing_type = kwargs.get('spacing_type', int())
        self.spacing_value = kwargs.get('spacing_value', float())
        self.sequential_launch = kwargs.get('sequential_launch', bool())
        self.order_by_id = kwargs.get('order_by_id', bool())
        self.heading_to_next_wp = kwargs.get('heading_to_next_wp', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mission_id != other.mission_id:
            return False
        if self.drone_id != other.drone_id:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.cruise_altitude_m != other.cruise_altitude_m:
            return False
        if self.cruise_speed_mps != other.cruise_speed_mps:
            return False
        if self.landing_mode != other.landing_mode:
            return False
        if self.spacing_type != other.spacing_type:
            return False
        if self.spacing_value != other.spacing_value:
            return False
        if self.sequential_launch != other.sequential_launch:
            return False
        if self.order_by_id != other.order_by_id:
            return False
        if self.heading_to_next_wp != other.heading_to_next_wp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_id' field must be of type 'str'"
        self._mission_id = value

    @builtins.property
    def drone_id(self):
        """Message field 'drone_id'."""
        return self._drone_id

    @drone_id.setter
    def drone_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'drone_id' field must be of type 'str'"
        self._drone_id = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from px4_interface.msg import MissionWaypoint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, MissionWaypoint) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'MissionWaypoint'"
        self._waypoints = value

    @builtins.property
    def cruise_altitude_m(self):
        """Message field 'cruise_altitude_m'."""
        return self._cruise_altitude_m

    @cruise_altitude_m.setter
    def cruise_altitude_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cruise_altitude_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cruise_altitude_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cruise_altitude_m = value

    @builtins.property
    def cruise_speed_mps(self):
        """Message field 'cruise_speed_mps'."""
        return self._cruise_speed_mps

    @cruise_speed_mps.setter
    def cruise_speed_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cruise_speed_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cruise_speed_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cruise_speed_mps = value

    @builtins.property
    def landing_mode(self):
        """Message field 'landing_mode'."""
        return self._landing_mode

    @landing_mode.setter
    def landing_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'landing_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'landing_mode' field must be an unsigned integer in [0, 255]"
        self._landing_mode = value

    @builtins.property
    def spacing_type(self):
        """Message field 'spacing_type'."""
        return self._spacing_type

    @spacing_type.setter
    def spacing_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spacing_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spacing_type' field must be an unsigned integer in [0, 255]"
        self._spacing_type = value

    @builtins.property
    def spacing_value(self):
        """Message field 'spacing_value'."""
        return self._spacing_value

    @spacing_value.setter
    def spacing_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spacing_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'spacing_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._spacing_value = value

    @builtins.property
    def sequential_launch(self):
        """Message field 'sequential_launch'."""
        return self._sequential_launch

    @sequential_launch.setter
    def sequential_launch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sequential_launch' field must be of type 'bool'"
        self._sequential_launch = value

    @builtins.property
    def order_by_id(self):
        """Message field 'order_by_id'."""
        return self._order_by_id

    @order_by_id.setter
    def order_by_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'order_by_id' field must be of type 'bool'"
        self._order_by_id = value

    @builtins.property
    def heading_to_next_wp(self):
        """Message field 'heading_to_next_wp'."""
        return self._heading_to_next_wp

    @heading_to_next_wp.setter
    def heading_to_next_wp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heading_to_next_wp' field must be of type 'bool'"
        self._heading_to_next_wp = value

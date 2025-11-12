# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_interface:msg/GyroControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GyroControl(type):
    """Metaclass of message 'GyroControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COMMAND_CONTROL': 0,
        'COMMAND_TAKEOFF': 1,
        'COMMAND_LAND': 2,
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
                'px4_interface.msg.GyroControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gyro_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gyro_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gyro_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gyro_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gyro_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COMMAND_CONTROL': cls.__constants['COMMAND_CONTROL'],
            'COMMAND_TAKEOFF': cls.__constants['COMMAND_TAKEOFF'],
            'COMMAND_LAND': cls.__constants['COMMAND_LAND'],
        }

    @property
    def COMMAND_CONTROL(self):
        """Message constant 'COMMAND_CONTROL'."""
        return Metaclass_GyroControl.__constants['COMMAND_CONTROL']

    @property
    def COMMAND_TAKEOFF(self):
        """Message constant 'COMMAND_TAKEOFF'."""
        return Metaclass_GyroControl.__constants['COMMAND_TAKEOFF']

    @property
    def COMMAND_LAND(self):
        """Message constant 'COMMAND_LAND'."""
        return Metaclass_GyroControl.__constants['COMMAND_LAND']


class GyroControl(metaclass=Metaclass_GyroControl):
    """
    Message class 'GyroControl'.

    Constants:
      COMMAND_CONTROL
      COMMAND_TAKEOFF
      COMMAND_LAND
    """

    __slots__ = [
        '_drone_id',
        '_command',
        '_target_altitude_m',
        '_yaw_deg',
        '_vx_mps',
        '_vy_mps',
    ]

    _fields_and_field_types = {
        'drone_id': 'string',
        'command': 'uint8',
        'target_altitude_m': 'float',
        'yaw_deg': 'float',
        'vx_mps': 'float',
        'vy_mps': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.drone_id = kwargs.get('drone_id', str())
        self.command = kwargs.get('command', int())
        self.target_altitude_m = kwargs.get('target_altitude_m', float())
        self.yaw_deg = kwargs.get('yaw_deg', float())
        self.vx_mps = kwargs.get('vx_mps', float())
        self.vy_mps = kwargs.get('vy_mps', float())

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
        if self.drone_id != other.drone_id:
            return False
        if self.command != other.command:
            return False
        if self.target_altitude_m != other.target_altitude_m:
            return False
        if self.yaw_deg != other.yaw_deg:
            return False
        if self.vx_mps != other.vx_mps:
            return False
        if self.vy_mps != other.vy_mps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def target_altitude_m(self):
        """Message field 'target_altitude_m'."""
        return self._target_altitude_m

    @target_altitude_m.setter
    def target_altitude_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_altitude_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_altitude_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_altitude_m = value

    @builtins.property
    def yaw_deg(self):
        """Message field 'yaw_deg'."""
        return self._yaw_deg

    @yaw_deg.setter
    def yaw_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_deg = value

    @builtins.property
    def vx_mps(self):
        """Message field 'vx_mps'."""
        return self._vx_mps

    @vx_mps.setter
    def vx_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx_mps = value

    @builtins.property
    def vy_mps(self):
        """Message field 'vy_mps'."""
        return self._vy_mps

    @vy_mps.setter
    def vy_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy_mps = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_interface:msg/PX4Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PX4Status(type):
    """Metaclass of message 'PX4Status'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FLIGHT_STATUS_NORMAL': 0,
        'FLIGHT_STATUS_WARNING': 1,
        'FLIGHT_STATUS_DANGER': 2,
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
                'px4_interface.msg.PX4Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__px4_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__px4_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__px4_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__px4_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__px4_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FLIGHT_STATUS_NORMAL': cls.__constants['FLIGHT_STATUS_NORMAL'],
            'FLIGHT_STATUS_WARNING': cls.__constants['FLIGHT_STATUS_WARNING'],
            'FLIGHT_STATUS_DANGER': cls.__constants['FLIGHT_STATUS_DANGER'],
        }

    @property
    def FLIGHT_STATUS_NORMAL(self):
        """Message constant 'FLIGHT_STATUS_NORMAL'."""
        return Metaclass_PX4Status.__constants['FLIGHT_STATUS_NORMAL']

    @property
    def FLIGHT_STATUS_WARNING(self):
        """Message constant 'FLIGHT_STATUS_WARNING'."""
        return Metaclass_PX4Status.__constants['FLIGHT_STATUS_WARNING']

    @property
    def FLIGHT_STATUS_DANGER(self):
        """Message constant 'FLIGHT_STATUS_DANGER'."""
        return Metaclass_PX4Status.__constants['FLIGHT_STATUS_DANGER']


class PX4Status(metaclass=Metaclass_PX4Status):
    """
    Message class 'PX4Status'.

    Constants:
      FLIGHT_STATUS_NORMAL
      FLIGHT_STATUS_WARNING
      FLIGHT_STATUS_DANGER
    """

    __slots__ = [
        '_timestamp',
        '_drone_id',
        '_heartbeat',
        '_battery_percentage',
        '_flight_ready',
        '_armed',
        '_status_in_flight',
        '_latitude',
        '_longitude',
        '_heading_deg',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'drone_id': 'string',
        'heartbeat': 'boolean',
        'battery_percentage': 'float',
        'flight_ready': 'boolean',
        'armed': 'boolean',
        'status_in_flight': 'uint8',
        'latitude': 'double',
        'longitude': 'double',
        'heading_deg': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.drone_id = kwargs.get('drone_id', str())
        self.heartbeat = kwargs.get('heartbeat', bool())
        self.battery_percentage = kwargs.get('battery_percentage', float())
        self.flight_ready = kwargs.get('flight_ready', bool())
        self.armed = kwargs.get('armed', bool())
        self.status_in_flight = kwargs.get('status_in_flight', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.heading_deg = kwargs.get('heading_deg', float())

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
        if self.timestamp != other.timestamp:
            return False
        if self.drone_id != other.drone_id:
            return False
        if self.heartbeat != other.heartbeat:
            return False
        if self.battery_percentage != other.battery_percentage:
            return False
        if self.flight_ready != other.flight_ready:
            return False
        if self.armed != other.armed:
            return False
        if self.status_in_flight != other.status_in_flight:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.heading_deg != other.heading_deg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

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
    def heartbeat(self):
        """Message field 'heartbeat'."""
        return self._heartbeat

    @heartbeat.setter
    def heartbeat(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat' field must be of type 'bool'"
        self._heartbeat = value

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percentage = value

    @builtins.property
    def flight_ready(self):
        """Message field 'flight_ready'."""
        return self._flight_ready

    @flight_ready.setter
    def flight_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flight_ready' field must be of type 'bool'"
        self._flight_ready = value

    @builtins.property
    def armed(self):
        """Message field 'armed'."""
        return self._armed

    @armed.setter
    def armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'armed' field must be of type 'bool'"
        self._armed = value

    @builtins.property
    def status_in_flight(self):
        """Message field 'status_in_flight'."""
        return self._status_in_flight

    @status_in_flight.setter
    def status_in_flight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_in_flight' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_in_flight' field must be an unsigned integer in [0, 255]"
        self._status_in_flight = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def heading_deg(self):
        """Message field 'heading_deg'."""
        return self._heading_deg

    @heading_deg.setter
    def heading_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_deg = value

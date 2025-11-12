# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_interface:msg/UIStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'battery_percentages'
# Member 'status_in_flights'
# Member 'latitudes'
# Member 'longitudes'
# Member 'heading_degs'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UIStatus(type):
    """Metaclass of message 'UIStatus'."""

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
                'px4_interface.msg.UIStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ui_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ui_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ui_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ui_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ui_status

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
        return Metaclass_UIStatus.__constants['FLIGHT_STATUS_NORMAL']

    @property
    def FLIGHT_STATUS_WARNING(self):
        """Message constant 'FLIGHT_STATUS_WARNING'."""
        return Metaclass_UIStatus.__constants['FLIGHT_STATUS_WARNING']

    @property
    def FLIGHT_STATUS_DANGER(self):
        """Message constant 'FLIGHT_STATUS_DANGER'."""
        return Metaclass_UIStatus.__constants['FLIGHT_STATUS_DANGER']


class UIStatus(metaclass=Metaclass_UIStatus):
    """
    Message class 'UIStatus'.

    Constants:
      FLIGHT_STATUS_NORMAL
      FLIGHT_STATUS_WARNING
      FLIGHT_STATUS_DANGER
    """

    __slots__ = [
        '_timestamp',
        '_drone_ids',
        '_heartbeats',
        '_battery_percentages',
        '_flight_readies',
        '_armeds',
        '_status_in_flights',
        '_latitudes',
        '_longitudes',
        '_heading_degs',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'drone_ids': 'sequence<string>',
        'heartbeats': 'sequence<boolean>',
        'battery_percentages': 'sequence<float>',
        'flight_readies': 'sequence<boolean>',
        'armeds': 'sequence<boolean>',
        'status_in_flights': 'sequence<uint8>',
        'latitudes': 'sequence<double>',
        'longitudes': 'sequence<double>',
        'heading_degs': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.drone_ids = kwargs.get('drone_ids', [])
        self.heartbeats = kwargs.get('heartbeats', [])
        self.battery_percentages = array.array('f', kwargs.get('battery_percentages', []))
        self.flight_readies = kwargs.get('flight_readies', [])
        self.armeds = kwargs.get('armeds', [])
        self.status_in_flights = array.array('B', kwargs.get('status_in_flights', []))
        self.latitudes = array.array('d', kwargs.get('latitudes', []))
        self.longitudes = array.array('d', kwargs.get('longitudes', []))
        self.heading_degs = array.array('f', kwargs.get('heading_degs', []))

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
        if self.drone_ids != other.drone_ids:
            return False
        if self.heartbeats != other.heartbeats:
            return False
        if self.battery_percentages != other.battery_percentages:
            return False
        if self.flight_readies != other.flight_readies:
            return False
        if self.armeds != other.armeds:
            return False
        if self.status_in_flights != other.status_in_flights:
            return False
        if self.latitudes != other.latitudes:
            return False
        if self.longitudes != other.longitudes:
            return False
        if self.heading_degs != other.heading_degs:
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
    def drone_ids(self):
        """Message field 'drone_ids'."""
        return self._drone_ids

    @drone_ids.setter
    def drone_ids(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'drone_ids' field must be a set or sequence and each value of type 'str'"
        self._drone_ids = value

    @builtins.property
    def heartbeats(self):
        """Message field 'heartbeats'."""
        return self._heartbeats

    @heartbeats.setter
    def heartbeats(self, value):
        if __debug__:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'heartbeats' field must be a set or sequence and each value of type 'bool'"
        self._heartbeats = value

    @builtins.property
    def battery_percentages(self):
        """Message field 'battery_percentages'."""
        return self._battery_percentages

    @battery_percentages.setter
    def battery_percentages(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'battery_percentages' array.array() must have the type code of 'f'"
            self._battery_percentages = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'battery_percentages' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._battery_percentages = array.array('f', value)

    @builtins.property
    def flight_readies(self):
        """Message field 'flight_readies'."""
        return self._flight_readies

    @flight_readies.setter
    def flight_readies(self, value):
        if __debug__:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'flight_readies' field must be a set or sequence and each value of type 'bool'"
        self._flight_readies = value

    @builtins.property
    def armeds(self):
        """Message field 'armeds'."""
        return self._armeds

    @armeds.setter
    def armeds(self, value):
        if __debug__:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'armeds' field must be a set or sequence and each value of type 'bool'"
        self._armeds = value

    @builtins.property
    def status_in_flights(self):
        """Message field 'status_in_flights'."""
        return self._status_in_flights

    @status_in_flights.setter
    def status_in_flights(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'status_in_flights' array.array() must have the type code of 'B'"
            self._status_in_flights = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'status_in_flights' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._status_in_flights = array.array('B', value)

    @builtins.property
    def latitudes(self):
        """Message field 'latitudes'."""
        return self._latitudes

    @latitudes.setter
    def latitudes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'latitudes' array.array() must have the type code of 'd'"
            self._latitudes = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'latitudes' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._latitudes = array.array('d', value)

    @builtins.property
    def longitudes(self):
        """Message field 'longitudes'."""
        return self._longitudes

    @longitudes.setter
    def longitudes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'longitudes' array.array() must have the type code of 'd'"
            self._longitudes = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'longitudes' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._longitudes = array.array('d', value)

    @builtins.property
    def heading_degs(self):
        """Message field 'heading_degs'."""
        return self._heading_degs

    @heading_degs.setter
    def heading_degs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'heading_degs' array.array() must have the type code of 'f'"
            self._heading_degs = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'heading_degs' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._heading_degs = array.array('f', value)

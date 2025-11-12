# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_interface:msg/MissionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionStatus(type):
    """Metaclass of message 'MissionStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_IDLE': 0,
        'STATE_ACTIVE': 1,
        'STATE_PAUSED': 2,
        'STATE_EMERGENCY': 3,
        'STATE_COMPLETED': 4,
        'STATE_ABORTED': 5,
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
                'px4_interface.msg.MissionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_IDLE': cls.__constants['STATE_IDLE'],
            'STATE_ACTIVE': cls.__constants['STATE_ACTIVE'],
            'STATE_PAUSED': cls.__constants['STATE_PAUSED'],
            'STATE_EMERGENCY': cls.__constants['STATE_EMERGENCY'],
            'STATE_COMPLETED': cls.__constants['STATE_COMPLETED'],
            'STATE_ABORTED': cls.__constants['STATE_ABORTED'],
        }

    @property
    def STATE_IDLE(self):
        """Message constant 'STATE_IDLE'."""
        return Metaclass_MissionStatus.__constants['STATE_IDLE']

    @property
    def STATE_ACTIVE(self):
        """Message constant 'STATE_ACTIVE'."""
        return Metaclass_MissionStatus.__constants['STATE_ACTIVE']

    @property
    def STATE_PAUSED(self):
        """Message constant 'STATE_PAUSED'."""
        return Metaclass_MissionStatus.__constants['STATE_PAUSED']

    @property
    def STATE_EMERGENCY(self):
        """Message constant 'STATE_EMERGENCY'."""
        return Metaclass_MissionStatus.__constants['STATE_EMERGENCY']

    @property
    def STATE_COMPLETED(self):
        """Message constant 'STATE_COMPLETED'."""
        return Metaclass_MissionStatus.__constants['STATE_COMPLETED']

    @property
    def STATE_ABORTED(self):
        """Message constant 'STATE_ABORTED'."""
        return Metaclass_MissionStatus.__constants['STATE_ABORTED']


class MissionStatus(metaclass=Metaclass_MissionStatus):
    """
    Message class 'MissionStatus'.

    Constants:
      STATE_IDLE
      STATE_ACTIVE
      STATE_PAUSED
      STATE_EMERGENCY
      STATE_COMPLETED
      STATE_ABORTED
    """

    __slots__ = [
        '_mission_id',
        '_state',
        '_drone_ids',
    ]

    _fields_and_field_types = {
        'mission_id': 'string',
        'state': 'uint8',
        'drone_ids': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_id = kwargs.get('mission_id', str())
        self.state = kwargs.get('state', int())
        self.drone_ids = kwargs.get('drone_ids', [])

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
        if self.state != other.state:
            return False
        if self.drone_ids != other.drone_ids:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

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

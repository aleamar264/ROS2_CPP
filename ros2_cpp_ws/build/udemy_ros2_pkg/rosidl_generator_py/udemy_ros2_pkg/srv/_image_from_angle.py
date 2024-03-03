# generated from rosidl_generator_py/resource/_idl.py.em
# with input from udemy_ros2_pkg:srv/ImageFromAngle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImageFromAngle_Request(type):
    """Metaclass of message 'ImageFromAngle_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('udemy_ros2_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'udemy_ros2_pkg.srv.ImageFromAngle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_from_angle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_from_angle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_from_angle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_from_angle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_from_angle__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageFromAngle_Request(metaclass=Metaclass_ImageFromAngle_Request):
    """Message class 'ImageFromAngle_Request'."""

    __slots__ = [
        '_angle',
    ]

    _fields_and_field_types = {
        'angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.angle = kwargs.get('angle', float())

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
        if self.angle != other.angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ImageFromAngle_Response(type):
    """Metaclass of message 'ImageFromAngle_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('udemy_ros2_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'udemy_ros2_pkg.srv.ImageFromAngle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_from_angle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_from_angle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_from_angle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_from_angle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_from_angle__response

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageFromAngle_Response(metaclass=Metaclass_ImageFromAngle_Response):
    """Message class 'ImageFromAngle_Response'."""

    __slots__ = [
        '_image_from_angle',
    ]

    _fields_and_field_types = {
        'image_from_angle': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image_from_angle = kwargs.get('image_from_angle', Image())

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
        if self.image_from_angle != other.image_from_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image_from_angle(self):
        """Message field 'image_from_angle'."""
        return self._image_from_angle

    @image_from_angle.setter
    def image_from_angle(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image_from_angle' field must be a sub message of type 'Image'"
        self._image_from_angle = value


class Metaclass_ImageFromAngle(type):
    """Metaclass of service 'ImageFromAngle'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('udemy_ros2_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'udemy_ros2_pkg.srv.ImageFromAngle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__image_from_angle

            from udemy_ros2_pkg.srv import _image_from_angle
            if _image_from_angle.Metaclass_ImageFromAngle_Request._TYPE_SUPPORT is None:
                _image_from_angle.Metaclass_ImageFromAngle_Request.__import_type_support__()
            if _image_from_angle.Metaclass_ImageFromAngle_Response._TYPE_SUPPORT is None:
                _image_from_angle.Metaclass_ImageFromAngle_Response.__import_type_support__()


class ImageFromAngle(metaclass=Metaclass_ImageFromAngle):
    from udemy_ros2_pkg.srv._image_from_angle import ImageFromAngle_Request as Request
    from udemy_ros2_pkg.srv._image_from_angle import ImageFromAngle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

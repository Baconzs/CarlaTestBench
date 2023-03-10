# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from carla_waypoint_types/CarlaWaypoint.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class CarlaWaypoint(genpy.Message):
  _md5sum = "99235d247406855b2598c797ec698ae4"
  _type = "carla_waypoint_types/CarlaWaypoint"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#
# Copyright (c) 2020 Intel Corporation.
#
# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.
#

int32 road_id
int32 section_id
int32 lane_id
bool is_junction
geometry_msgs/Pose pose
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['road_id','section_id','lane_id','is_junction','pose']
  _slot_types = ['int32','int32','int32','bool','geometry_msgs/Pose']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       road_id,section_id,lane_id,is_junction,pose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CarlaWaypoint, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.road_id is None:
        self.road_id = 0
      if self.section_id is None:
        self.section_id = 0
      if self.lane_id is None:
        self.lane_id = 0
      if self.is_junction is None:
        self.is_junction = False
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
    else:
      self.road_id = 0
      self.section_id = 0
      self.lane_id = 0
      self.is_junction = False
      self.pose = geometry_msgs.msg.Pose()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3iB7d().pack(_x.road_id, _x.section_id, _x.lane_id, _x.is_junction, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 69
      (_x.road_id, _x.section_id, _x.lane_id, _x.is_junction, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w,) = _get_struct_3iB7d().unpack(str[start:end])
      self.is_junction = bool(self.is_junction)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3iB7d().pack(_x.road_id, _x.section_id, _x.lane_id, _x.is_junction, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 69
      (_x.road_id, _x.section_id, _x.lane_id, _x.is_junction, _x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w,) = _get_struct_3iB7d().unpack(str[start:end])
      self.is_junction = bool(self.is_junction)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3iB7d = None
def _get_struct_3iB7d():
    global _struct_3iB7d
    if _struct_3iB7d is None:
        _struct_3iB7d = struct.Struct("<3iB7d")
    return _struct_3iB7d

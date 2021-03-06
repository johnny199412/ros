/* Auto-generated by genmsg_cpp for file /home/james/ros/art/utexas-art-ros-pkg-read-only/stacks/art_vehicle/art_msgs/msg/RoadState.msg */
#ifndef ART_MSGS_MESSAGE_ROADSTATE_H
#define ART_MSGS_MESSAGE_ROADSTATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace art_msgs
{
template <class ContainerAllocator>
struct RoadState_ {
  typedef RoadState_<ContainerAllocator> Type;

  RoadState_()
  : state(0)
  {
  }

  RoadState_(const ContainerAllocator& _alloc)
  : state(0)
  {
  }

  typedef uint16_t _state_type;
  uint16_t state;

  enum { Init = 0 };
  enum { Block = 1 };
  enum { Evade = 2 };
  enum { Follow = 3 };
  enum { Pass = 4 };
  enum { Uturn = 5 };
  enum { WaitCross = 6 };
  enum { WaitLane = 7 };
  enum { WaitPass = 8 };
  enum { WaitStop = 9 };
  enum { Zone = 10 };
  enum { N_states = 11 };

private:
  static const char* __s_getDataType_() { return "art_msgs/RoadState"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "e033b3ead3b77d2e264d454d67d06e4d"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# Navigator Road state values\n\
# $Id$\n\
\n\
uint16 Init      = 0\n\
uint16 Block     = 1\n\
uint16 Evade     = 2\n\
uint16 Follow    = 3\n\
uint16 Pass      = 4\n\
uint16 Uturn     = 5\n\
uint16 WaitCross = 6\n\
uint16 WaitLane  = 7\n\
uint16 WaitPass  = 8\n\
uint16 WaitStop  = 9\n\
uint16 Zone      = 10\n\
uint16 N_states  = 11\n\
\n\
uint16 state\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, state);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, state);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(state);
    return size;
  }

  typedef boost::shared_ptr< ::art_msgs::RoadState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::art_msgs::RoadState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RoadState
typedef  ::art_msgs::RoadState_<std::allocator<void> > RoadState;

typedef boost::shared_ptr< ::art_msgs::RoadState> RoadStatePtr;
typedef boost::shared_ptr< ::art_msgs::RoadState const> RoadStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::art_msgs::RoadState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::art_msgs::RoadState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace art_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::art_msgs::RoadState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::art_msgs::RoadState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::art_msgs::RoadState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e033b3ead3b77d2e264d454d67d06e4d";
  }

  static const char* value(const  ::art_msgs::RoadState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe033b3ead3b77d2eULL;
  static const uint64_t static_value2 = 0x264d454d67d06e4dULL;
};

template<class ContainerAllocator>
struct DataType< ::art_msgs::RoadState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "art_msgs/RoadState";
  }

  static const char* value(const  ::art_msgs::RoadState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::art_msgs::RoadState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Navigator Road state values\n\
# $Id$\n\
\n\
uint16 Init      = 0\n\
uint16 Block     = 1\n\
uint16 Evade     = 2\n\
uint16 Follow    = 3\n\
uint16 Pass      = 4\n\
uint16 Uturn     = 5\n\
uint16 WaitCross = 6\n\
uint16 WaitLane  = 7\n\
uint16 WaitPass  = 8\n\
uint16 WaitStop  = 9\n\
uint16 Zone      = 10\n\
uint16 N_states  = 11\n\
\n\
uint16 state\n\
\n\
";
  }

  static const char* value(const  ::art_msgs::RoadState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::art_msgs::RoadState_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::art_msgs::RoadState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RoadState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::art_msgs::RoadState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::art_msgs::RoadState_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.state);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ART_MSGS_MESSAGE_ROADSTATE_H


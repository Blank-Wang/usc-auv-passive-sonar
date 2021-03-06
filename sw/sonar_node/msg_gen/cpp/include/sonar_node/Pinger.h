/* Auto-generated by genmsg_cpp for file /home/hieu/ros_workspace/sonar_node/msg/Pinger.msg */
#ifndef SONAR_NODE_MESSAGE_PINGER_H
#define SONAR_NODE_MESSAGE_PINGER_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace sonar_node
{
template <class ContainerAllocator>
struct Pinger_ : public ros::Message
{
  typedef Pinger_<ContainerAllocator> Type;

  Pinger_()
  : Id(0)
  , Heading(0.0)
  , Magnitude(0.0)
  , TimeSince(0.0)
  {
  }

  Pinger_(const ContainerAllocator& _alloc)
  : Id(0)
  , Heading(0.0)
  , Magnitude(0.0)
  , TimeSince(0.0)
  {
  }

  typedef int8_t _Id_type;
  int8_t Id;

  typedef double _Heading_type;
  double Heading;

  typedef double _Magnitude_type;
  double Magnitude;

  typedef double _TimeSince_type;
  double TimeSince;


private:
  static const char* __s_getDataType_() { return "sonar_node/Pinger"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "49d3e57ff39f4b02d41f58af18abc775"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int8 Id           # 0 is correct pinger, 1 is incorrect pinger\n\
float64 Heading\n\
float64 Magnitude\n\
float64 TimeSince\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, Id);
    ros::serialization::serialize(stream, Heading);
    ros::serialization::serialize(stream, Magnitude);
    ros::serialization::serialize(stream, TimeSince);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, Id);
    ros::serialization::deserialize(stream, Heading);
    ros::serialization::deserialize(stream, Magnitude);
    ros::serialization::deserialize(stream, TimeSince);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(Id);
    size += ros::serialization::serializationLength(Heading);
    size += ros::serialization::serializationLength(Magnitude);
    size += ros::serialization::serializationLength(TimeSince);
    return size;
  }

  typedef boost::shared_ptr< ::sonar_node::Pinger_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sonar_node::Pinger_<ContainerAllocator>  const> ConstPtr;
}; // struct Pinger
typedef  ::sonar_node::Pinger_<std::allocator<void> > Pinger;

typedef boost::shared_ptr< ::sonar_node::Pinger> PingerPtr;
typedef boost::shared_ptr< ::sonar_node::Pinger const> PingerConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sonar_node::Pinger_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sonar_node::Pinger_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sonar_node

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::sonar_node::Pinger_<ContainerAllocator> > {
  static const char* value() 
  {
    return "49d3e57ff39f4b02d41f58af18abc775";
  }

  static const char* value(const  ::sonar_node::Pinger_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x49d3e57ff39f4b02ULL;
  static const uint64_t static_value2 = 0xd41f58af18abc775ULL;
};

template<class ContainerAllocator>
struct DataType< ::sonar_node::Pinger_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sonar_node/Pinger";
  }

  static const char* value(const  ::sonar_node::Pinger_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sonar_node::Pinger_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 Id           # 0 is correct pinger, 1 is incorrect pinger\n\
float64 Heading\n\
float64 Magnitude\n\
float64 TimeSince\n\
\n\
";
  }

  static const char* value(const  ::sonar_node::Pinger_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::sonar_node::Pinger_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sonar_node::Pinger_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.Id);
    stream.next(m.Heading);
    stream.next(m.Magnitude);
    stream.next(m.TimeSince);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Pinger_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sonar_node::Pinger_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sonar_node::Pinger_<ContainerAllocator> & v) 
  {
    s << indent << "Id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.Id);
    s << indent << "Heading: ";
    Printer<double>::stream(s, indent + "  ", v.Heading);
    s << indent << "Magnitude: ";
    Printer<double>::stream(s, indent + "  ", v.Magnitude);
    s << indent << "TimeSince: ";
    Printer<double>::stream(s, indent + "  ", v.TimeSince);
  }
};


} // namespace message_operations
} // namespace ros

#endif // SONAR_NODE_MESSAGE_PINGER_H


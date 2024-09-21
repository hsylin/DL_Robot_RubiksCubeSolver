// Generated by gencpp from file gqcnn/BoundingBox.msg
// DO NOT EDIT!


#ifndef GQCNN_MESSAGE_BOUNDINGBOX_H
#define GQCNN_MESSAGE_BOUNDINGBOX_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gqcnn
{
template <class ContainerAllocator>
struct BoundingBox_
{
  typedef BoundingBox_<ContainerAllocator> Type;

  BoundingBox_()
    : minX(0.0)
    , minY(0.0)
    , maxX(0.0)
    , maxY(0.0)  {
    }
  BoundingBox_(const ContainerAllocator& _alloc)
    : minX(0.0)
    , minY(0.0)
    , maxX(0.0)
    , maxY(0.0)  {
  (void)_alloc;
    }



   typedef double _minX_type;
  _minX_type minX;

   typedef double _minY_type;
  _minY_type minY;

   typedef double _maxX_type;
  _maxX_type maxX;

   typedef double _maxY_type;
  _maxY_type maxY;





  typedef boost::shared_ptr< ::gqcnn::BoundingBox_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gqcnn::BoundingBox_<ContainerAllocator> const> ConstPtr;

}; // struct BoundingBox_

typedef ::gqcnn::BoundingBox_<std::allocator<void> > BoundingBox;

typedef boost::shared_ptr< ::gqcnn::BoundingBox > BoundingBoxPtr;
typedef boost::shared_ptr< ::gqcnn::BoundingBox const> BoundingBoxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gqcnn::BoundingBox_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gqcnn::BoundingBox_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gqcnn::BoundingBox_<ContainerAllocator1> & lhs, const ::gqcnn::BoundingBox_<ContainerAllocator2> & rhs)
{
  return lhs.minX == rhs.minX &&
    lhs.minY == rhs.minY &&
    lhs.maxX == rhs.maxX &&
    lhs.maxY == rhs.maxY;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gqcnn::BoundingBox_<ContainerAllocator1> & lhs, const ::gqcnn::BoundingBox_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gqcnn

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gqcnn::BoundingBox_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gqcnn::BoundingBox_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gqcnn::BoundingBox_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gqcnn::BoundingBox_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gqcnn::BoundingBox_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gqcnn::BoundingBox_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gqcnn::BoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "316ddfac9d67d96b86cd55005b01f75e";
  }

  static const char* value(const ::gqcnn::BoundingBox_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x316ddfac9d67d96bULL;
  static const uint64_t static_value2 = 0x86cd55005b01f75eULL;
};

template<class ContainerAllocator>
struct DataType< ::gqcnn::BoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gqcnn/BoundingBox";
  }

  static const char* value(const ::gqcnn::BoundingBox_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gqcnn::BoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright ©2017. The Regents of the University of California (Regents).\n"
"# All Rights Reserved. Permission to use, copy, modify, and distribute this\n"
"# software and its documentation for educational, research, and not-for-profit\n"
"# purposes, without fee and without a signed licensing agreement, is hereby\n"
"# granted, provided that the above copyright notice, this paragraph and the\n"
"# following two paragraphs appear in all copies, modifications, and\n"
"# distributions. Contact The Office of Technology Licensing, UC Berkeley, 2150\n"
"# Shattuck Avenue, Suite 510, Berkeley, CA 94720-1620, (510) 643-7201,\n"
"# otl@berkeley.edu,\n"
"# http://ipira.berkeley.edu/industry-info for commercial licensing opportunities.\n"
"\n"
"# IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT, SPECIAL,\n"
"# INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING OUT OF\n"
"# THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS BEEN\n"
"# ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n"
"\n"
"# REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,\n"
"# THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR\n"
"# PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED\n"
"# HEREUNDER IS PROVIDED \"AS IS\". REGENTS HAS NO OBLIGATION TO PROVIDE\n"
"# MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.\n"
"\n"
"float64 minX\n"
"float64 minY\n"
"float64 maxX\n"
"float64 maxY\n"
;
  }

  static const char* value(const ::gqcnn::BoundingBox_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gqcnn::BoundingBox_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.minX);
      stream.next(m.minY);
      stream.next(m.maxX);
      stream.next(m.maxY);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoundingBox_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gqcnn::BoundingBox_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gqcnn::BoundingBox_<ContainerAllocator>& v)
  {
    s << indent << "minX: ";
    Printer<double>::stream(s, indent + "  ", v.minX);
    s << indent << "minY: ";
    Printer<double>::stream(s, indent + "  ", v.minY);
    s << indent << "maxX: ";
    Printer<double>::stream(s, indent + "  ", v.maxX);
    s << indent << "maxY: ";
    Printer<double>::stream(s, indent + "  ", v.maxY);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GQCNN_MESSAGE_BOUNDINGBOX_H

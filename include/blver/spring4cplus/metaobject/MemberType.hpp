#ifndef BLVER_SPRING_4_C_PLUS_MEMBER_TYPE_HPP
#define BLVER_SPRING_4_C_PLUS_MEMBER_TYPE_HPP

/**
\file MemberType.hpp
*/
namespace blver {
namespace spring4cplus{
namespace metaobject{

/**
\brief 方法字段的可访问性
*/
enum MemberType{
	Field,
	Method,
	Constructor,
	Destructor
}


}
}
}

#endif //BLVER_SPRING_4_C_PLUS_MEMBER_TYPE_HPP

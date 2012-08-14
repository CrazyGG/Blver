#ifndef BLVER_SPRING_4_C_PLUS_CALLER_HPP
#define BLVER_SPRING_4_C_PLUS_CALLER_HPP

/**
\Caller.hpp
*/

namespace blver {
namespace spring4cplus {
namespace metaobject {

class Caller {
public:
	~Caller()
	{}
public:
	virtual Result invoke(void* obj,const Parameter& parameter) = 0;
};

}
}
}
#endif //BLVER_SPRING_4_C_PLUS_CALLER_HPP

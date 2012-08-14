#ifndef BLVER_SPRING_4_C_PLUS_BEAN_FACTORY_HPP
#define BLVER_SPRING_4_C_PLUS_BEAN_FACTORY_HPP

/**
\file BeanFactory.hpp
*/

#include <blver/platform.hpp>

#include <blver/spring4cplus/IResource.hpp>

namespace blver {
namespace spring4cplus {


/**
\brief spiring4cplus核心接口，spring4cplus的使用通过该接口创建对象

BeanFactory是Spring的c++ 实现。BeanFactory 实现依赖注入。在对象创建之后为对象查找依赖关系。
*/
class BeanFactory {
public:
	/**
	\brief 工厂函数，返回BeanFactory的唯一实例。

	静态工厂方法。返回系统中BeanFactory的唯一实例，是spring4cplus的唯一入口。
	*/
	static BeanFactory& getInstance();
public:

	/**
	\brief 析构函数
	*/
	～BeanFactory();
public:

	void addResource(const IResource& resource);

	/**
	\brief 核心函数，该方法将查找名称为beanName的对象，并查找相关依赖。

	\param	beanName	对象名称
	\return	beanName指定的对象
	\throw	
	*/
	template<typename ObjectType>
	ObjectType* getBean(const String& beanName);
	
	/**
	\brief 测试指定的名称的对象是不是配置为单例，单例对象在BeanFactory生命周期之内，在容器中只有唯一实例。
	*/
	Boolean isSingleton(const String& beanName);

	/**
	\brief 测试指定名称的对象是否存在。 
	*/
	Boolean contains(const String& beanName);

public:
	BeanFactory();
	BeanFactory(const BeanFactory&);
	BeanFactory& operator=(const BeanFactory&);
};


}
}

#endif //BLVER_SPRING_4_C_PLUS_BEAN_FACTORY_HPP

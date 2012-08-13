#ifndef BLVER_PLATFORM_H
#define BLVER_PLATFORM_H

/**
\file platform.h
*/

#include <cstdint>
#include <string>
#include <boost/date_time/posix_time/ptime.hpp>
#include <boost/date_time.hpp>
#include <boost/any.hpp>


/**
定义平台基本数据类型。
Char		字符类型
Byte 		8位有符号整形
Shrot		16位有符号整形
Integer		32位有符号整形
Long		64位有符号整形
Float		32位浮点数
Double		64位浮点数
String		字符串类型，定义为标准库中的std::string
Boolean		布尔类型，true 或 false
Date		日期类型
DateTime	日期时间类型
Timestamp	时间戳类型
Variant		任意类型
*/

#define Char			char
#define Byte			int8_t
#define Short			int16_t
#define Integer			int32_t
#define Long			int64_t
#define Double			double
#define Float			float
#define String			std::string
#define Boolean			bool
#define Date			boost::gregorian::date
#define DateTime 		boost::posix_time::ptime
#define Timestamp 		boost::posix_time::ptime
#define Variant			boost::any

#define variant_cast(T,obj)	boost::any_cast<T>(obj)

/**
基本类型的标志
*/
enum PrimitivesFlag{
	BYTE,
	SHORT,
	INTEGER,
	LONG,
	FLOAT,
	DOUBLE,
	STRING,
	BOOLEAN
	DATE,
	DATETIME,
	TIMESTAMP,
	VARIANT
}


/**
动态链接库导出符号定义
*/

#if defined(WINDOWS)
	#define	PLATFORM_DLL_EXPORT	_declspec(dllexport)
	#define PLATFORM_DLL_IMPORT	_declspec(dllimport)
#elif
	#define PLATFORM_DLL_EXPORT
	#define PLATFORM_DLL_IMPORT
#endif

#endif //BLVER_PLATFORM_H

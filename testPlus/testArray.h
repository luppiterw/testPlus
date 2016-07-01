#pragma once

namespace testarray
{

	const int citySize = 5;
	const int yearSize = 4;
	char* const cities[citySize] =			///< array of pointers
	{													///<  to 5 strings
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	///< int maxtemps[yearSize][citySize] 不加const会导致重复定义的编译错误
	const int maxtemps[yearSize][citySize] =	///< 2-D array
	{			
		{95, 99, 86, 100, 104},			///< vaules for maxtemps[0]
		{95, 97, 90, 106, 102},			///< vaules for maxtemps[1]
		{96, 100, 940, 107, 105},		///< vaules for maxtemps[2]
		{97, 102, 89, 108, 104}		///< vaules for maxtemps[3]
	};


	void print_cities();
	void print_maxtemps();


}


/**
http://blog.csdn.net/ace_fei/article/details/8587403
我们知道，在 C++（但不是在 C 语言）中，const 限定符对默认存储类型稍有影响。在默认情况下，全局变量的链接性为外部的，但 const 全局变量的链接性为内部的。也就是说，在 C++ 看来，全局 const 定义就像使用了 static 说明符一样。

因此，可以将 const 常量定义在头文件中供工程中的多个其它文件包含引用，并且编译时不会产生变量重复定义的错误。当然，也可以用 #define 宏定义。

一般常量定义并无问题，但是，如果 const 要限定的是指针就须特别注意。这里以字符数组为例来说明。
[cpp] view plain copy
#ifndef CONST_HEADER_H_
#define CONST_HEADER_H_

const char* CONST_STRING = "wangqi";          // 错误！指针 CONST_STRING 并非 const 常量，所以该头文件
//      被多个文件包含时，会有变量重复定义的编译错误。
const char* const CONST_STRING = "wangqi";  // 正确，CONST_STRING 是指向常量的常量指针。
const char CONST_STRING[] = "wangqi";       // 正确，数组名是一个常量指针
//CONST_STRING 是 const char [7] 类型。
char* const CONST_STRING = "wangqi";      // 正确，CONST_STRING 是常量指针。

namespace // 正确
{
char CONST_STRING[] = "wangqi";
}

namespace // 正确
{
char* CONST_STRING = "wangqi";
}

namespace // 正确
{
const char* CONST_STRING = "wangqi";
}
#endif // CONST_HEADER_H_
*/

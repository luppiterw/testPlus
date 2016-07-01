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

	///< int maxtemps[yearSize][citySize] ����const�ᵼ���ظ�����ı������
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
����֪������ C++���������� C ���ԣ��У�const �޶�����Ĭ�ϴ洢��������Ӱ�졣��Ĭ������£�ȫ�ֱ�����������Ϊ�ⲿ�ģ��� const ȫ�ֱ�����������Ϊ�ڲ��ġ�Ҳ����˵���� C++ ������ȫ�� const �������ʹ���� static ˵����һ����

��ˣ����Խ� const ����������ͷ�ļ��й������еĶ�������ļ��������ã����ұ���ʱ������������ظ�����Ĵ��󡣵�Ȼ��Ҳ������ #define �궨�塣

һ�㳣�����岢�����⣬���ǣ���� const Ҫ�޶�����ָ������ر�ע�⡣�������ַ�����Ϊ����˵����
[cpp] view plain copy
#ifndef CONST_HEADER_H_
#define CONST_HEADER_H_

const char* CONST_STRING = "wangqi";          // ����ָ�� CONST_STRING ���� const ���������Ը�ͷ�ļ�
//      ������ļ�����ʱ�����б����ظ�����ı������
const char* const CONST_STRING = "wangqi";  // ��ȷ��CONST_STRING ��ָ�����ĳ���ָ�롣
const char CONST_STRING[] = "wangqi";       // ��ȷ����������һ������ָ��
//CONST_STRING �� const char [7] ���͡�
char* const CONST_STRING = "wangqi";      // ��ȷ��CONST_STRING �ǳ���ָ�롣

namespace // ��ȷ
{
char CONST_STRING[] = "wangqi";
}

namespace // ��ȷ
{
char* CONST_STRING = "wangqi";
}

namespace // ��ȷ
{
const char* CONST_STRING = "wangqi";
}
#endif // CONST_HEADER_H_
*/

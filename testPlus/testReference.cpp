#include "stdafx.h"
#include "testReference.h"
#include <iostream>

int testreference::sum(int a, int b, int c)
{
	return a + b + c;
}

float testreference::sum(float a, float b, float c)
{
	return a + b + c;
}

void testreference::testResult()
{
	std::cout << "sum(1,2,3)"<<sum(1,2,3) << std::endl;
	std::cout << "sum(1.0F,2.0F,3.0F)" << sum(1.0F, 2.0F, 3.0F) << std::endl;
	//std::cout << "sum(1,2,3.0F)" << sum(1, 2, 3,0F) << std::endl; ///< ÎŞÆ¥ÅäÀàĞÍ
	//std::cout << "sum(1.0,2.0,3.0)" << sum(1.0, 2.0, 3.0) << std::endl;
}
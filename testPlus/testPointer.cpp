#include "stdafx.h"
#include "testPointer.h"
#include <iostream>

//double testpointer::dyDVals[4] = { 1.1, 2.2, 3.3, 4.4 };
//extern double testpointer::dyDVals[4] = { 1.1, 2.2, 3.3, 4.4 };
void testpointer::printDistinguish()
{

	std::cout << "*p="<< (*pDVals) << std::endl;
	std::cout << "*(p++)=" << (*(pDVals+1)) << std::endl;
}
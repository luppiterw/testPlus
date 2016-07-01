// testPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include "hiostream.h"

#include "testWCOUT.h"
#include "testReference.h"
#include "testException.h"
#include "testArray.h"
#include "testPointer.h"
int main()
{
	//testwcout::printTestCoutString();

	//testreference::testResult();
	//testexception::testResult();

	//testarray::print_cities();
	//testarray::print_maxtemps();

	testpointer::printDistinguish();

    return 0;
}


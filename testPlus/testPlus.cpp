// testPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include "hiostream.h"

#include "testWCOUT.h"
#include "testReference.h"
#include "testException.h"
int main()
{
	//testwcout::printTestCoutString();

	testreference::testResult();
	testexception::testResult();

    return 0;
}


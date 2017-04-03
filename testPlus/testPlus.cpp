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

	//char 
	//printf("\a");
	char a = '\a';
	char b = '\b';
	char c = '\c';
	//printf("\\a=[%c]", a);
	printf("[\02]");
	//printf("\a");

	//for (int i = 0; i < 128; i++) {
	//	printf("%d = [\%c] \n", i, i);
	//}
    return 0;
}


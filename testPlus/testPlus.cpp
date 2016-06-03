// testPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include "hiostream.h"
#include "testSpace.h"
#include "testWCOUT.h"
int main()
{
	tPrint();

	vPrint();
	::tOldVersion::vPrint();

	testwcout::printTestWCOUTCode();

	int abc = 123;
	//std::cout << abc << std::endl;
	//cccc::cout<< abc << std::endl;
	//std::string testChStr = "ÄãÊÇË­";
	std::wstring testWChStr = L"ÄãÊÇË­";
	//std::string testChStr = "asdsda";
	//testChStr.size;
	//size_t chStrSize = testChStr.size();
	//size_t chStrSize = strlen(testChStr.c_str());
	size_t WchStrSize = testWChStr.length();

	std::wcout.imbue(std::locale("chs"));
	std::wcout << testWChStr.c_str();
	std::cout <<"W["<< "]  Wsize="  << WchStrSize << std::endl;

	//for (size_t i = 0; i < strlen(testChStr.c_str()); i++)
	for (size_t i = 0; i < WchStrSize; i++)
	{
		std::cout<< i << " = [" << testWChStr[i] <<"]\n";
	}



	std::string GeneralchStr = "ÄãÊÇË­";
	size_t GeneralchStrSize = strlen(GeneralchStr.c_str());

	std::cout << "General[" << "]  strlen=" << GeneralchStrSize 
	<< " .length()=" << GeneralchStr.length()<< std::endl;

	for (size_t i = 0; i < GeneralchStrSize; i++)
	{
		std::cout << i << " = [" << GeneralchStr[i] << "]\n";
	}

	std::cout<<"sizeof(string)="<<sizeof(std::string)
	<<" sizeof(wstring)="<<sizeof(std::wstring)<<std::endl;
    return 0;
}


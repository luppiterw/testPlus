#include "stdafx.h"

#include "testWCOUT.h"

void testwcout::printTestWCOUTCode()
{
	std::cout << "**********testWCOUT.printTestWCOUTCode starts************" << std::endl;
	std::locale def;
	std::cout << "local.name=" << def.name().c_str() << std::endl;
	
	//为了保证本地化输出（文字/时间/货币等），chs表示中国，wcout必须使用本地化解析编码   
	std::wcout.imbue(std::locale("chs"));

	//为了保证本地化输出（文字/时间/货币等），chs表示中国，wcout必须使用本地化解析编码   
	std::wcout.imbue(std::locale("chs"));

	//string 英文，正确颠倒位置，显示第二个字符正确   
	std::string str1("ABCabc");
	std::string str11(str1.rbegin(), str1.rend());
	std::cout << "UK\ts1\t:" << str1.c_str() << tab << str1[1] << tab << str11.c_str() << std::endl;

	//wstring 英文，正确颠倒位置，显示第二个字符正确  
	std::wstring str2 = L"ABCabc";
	std::wstring str22(str2.rbegin(), str2.rend());
	std::wcout << "UK\tws4\t:" << str2.c_str() << tab << str2[1] << tab << str22.c_str() << std::endl;

	//string 中文，颠倒后，变成乱码，第二个字符读取也错误   
	std::string str3("你好么？");
	std::string str33(str3.rbegin(), str3.rend());
	std::cout << "CHN\ts3\t:" << str3.c_str() << tab << str3[1] << tab << str33.c_str() << std::endl;

	//正确的打印第二个字符的方法   
	std::cout << "CHN\ts3\t:RIGHT\t" << str3[2] << str3[3] << std::endl;

	//中文，正确颠倒位置，显示第二个字符正确   
	std::wstring str4 = L"你好么？";
	std::wstring str44(str4.rbegin(), str4.rend());
	std::wcout << "CHN\tws4\t:" << str4.c_str() << tab << str4[1] << tab << str44.c_str() << std::endl;

	//只有char类型的string时才可以如此构造  
	std::wstring str5(str1.begin(), str1.end());
	std::wstring str55(str5.rbegin(), str5.rend());
	std::wcout << "CHN\tws5\t:" << str5.c_str() << tab << str5[1] << tab << str55.c_str() << std::endl;

	//如此构造将失败!!!!  
	std::wstring str6(str3.begin(), str3.end());
	std::wstring str66(str6.rbegin(), str6.rend());
	std::wcout << "CHN\tws6\t:" << str6.c_str() << tab << str6[1] << tab << str66.c_str() << std::endl;

	std::cout << std::endl;
	std::cout << "**********testWCOUT.printTestWCOUTCode************" << std::endl;
}
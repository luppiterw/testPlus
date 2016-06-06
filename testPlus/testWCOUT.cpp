#include "stdafx.h"

#include "testWCOUT.h"
#include "testSpace.h"
void testwcout::printTestCoutString()
{
	tPrint();

	vPrint();
	::tOldVersion::vPrint();

	testwcout::printTestWCOUTCode();

	int abc = 123;
	//std::cout << abc << std::endl;
	//cccc::cout<< abc << std::endl;
	//std::string testChStr = "����˭";
	std::wstring testWChStr = L"����˭";
	//std::string testChStr = "asdsda";
	//testChStr.size;
	//size_t chStrSize = testChStr.size();
	//size_t chStrSize = strlen(testChStr.c_str());
	size_t WchStrSize = testWChStr.length();

	std::wcout.imbue(std::locale("chs"));
	std::wcout << testWChStr.c_str();
	std::cout << "W[" << "]  Wsize=" << WchStrSize << std::endl;

	//for (size_t i = 0; i < strlen(testChStr.c_str()); i++)
	for (size_t i = 0; i < WchStrSize; i++)
	{
		std::cout << i << " = [" << testWChStr[i] << "]\n";
	}



	std::string GeneralchStr = "����˭";
	size_t GeneralchStrSize = strlen(GeneralchStr.c_str());

	std::cout << "General[" << "]  strlen=" << GeneralchStrSize
		<< " .length()=" << GeneralchStr.length() << std::endl;

	for (size_t i = 0; i < GeneralchStrSize; i++)
	{
		std::cout << i << " = [" << GeneralchStr[i] << "]\n";
	}

	std::cout << "sizeof(string)=" << sizeof(std::string)
		<< " sizeof(wstring)=" << sizeof(std::wstring) << std::endl;

}
void testwcout::printTestWCOUTCode()
{
	std::cout << "**********testWCOUT.printTestWCOUTCode starts************" << std::endl;
	std::locale def;
	std::cout << "local.name=" << def.name().c_str() << std::endl;
	
	//Ϊ�˱�֤���ػ����������/ʱ��/���ҵȣ���chs��ʾ�й���wcout����ʹ�ñ��ػ���������   
	std::wcout.imbue(std::locale("chs"));

	//Ϊ�˱�֤���ػ����������/ʱ��/���ҵȣ���chs��ʾ�й���wcout����ʹ�ñ��ػ���������   
	std::wcout.imbue(std::locale("chs"));

	//string Ӣ�ģ���ȷ�ߵ�λ�ã���ʾ�ڶ����ַ���ȷ   
	std::string str1("ABCabc");
	std::string str11(str1.rbegin(), str1.rend());
	std::cout << "UK\ts1\t:" << str1.c_str() << tab << str1[1] << tab << str11.c_str() << std::endl;

	//wstring Ӣ�ģ���ȷ�ߵ�λ�ã���ʾ�ڶ����ַ���ȷ  
	std::wstring str2 = L"ABCabc";
	std::wstring str22(str2.rbegin(), str2.rend());
	std::wcout << "UK\tws4\t:" << str2.c_str() << tab << str2[1] << tab << str22.c_str() << std::endl;

	//string ���ģ��ߵ��󣬱�����룬�ڶ����ַ���ȡҲ����   
	std::string str3("���ô��");
	std::string str33(str3.rbegin(), str3.rend());
	std::cout << "CHN\ts3\t:" << str3.c_str() << tab << str3[1] << tab << str33.c_str() << std::endl;

	//��ȷ�Ĵ�ӡ�ڶ����ַ��ķ���   
	std::cout << "CHN\ts3\t:RIGHT\t" << str3[2] << str3[3] << std::endl;

	//���ģ���ȷ�ߵ�λ�ã���ʾ�ڶ����ַ���ȷ   
	std::wstring str4 = L"���ô��";
	std::wstring str44(str4.rbegin(), str4.rend());
	std::wcout << "CHN\tws4\t:" << str4.c_str() << tab << str4[1] << tab << str44.c_str() << std::endl;

	//ֻ��char���͵�stringʱ�ſ�����˹���  
	std::wstring str5(str1.begin(), str1.end());
	std::wstring str55(str5.rbegin(), str5.rend());
	std::wcout << "CHN\tws5\t:" << str5.c_str() << tab << str5[1] << tab << str55.c_str() << std::endl;

	//��˹��콫ʧ��!!!!  
	std::wstring str6(str3.begin(), str3.end());
	std::wstring str66(str6.rbegin(), str6.rend());
	std::wcout << "CHN\tws6\t:" << str6.c_str() << tab << str6[1] << tab << str66.c_str() << std::endl;

	std::cout << std::endl;
	std::cout << "**********testWCOUT.printTestWCOUTCode************" << std::endl;
}
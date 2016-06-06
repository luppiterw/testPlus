#include "stdafx.h"
#include "testException.h"
#include <iostream>

#define X_SIZE 20

void testexception::oexception::bad_alloc()
{
	int*  x, * tmpX;
	try
	{
		x = new int[X_SIZE];
		tmpX = x;
		int i = 0;
		while (i++ < X_SIZE)
		{
			*x = i;

			std::cout << "	"<<i<<"	" << x << "=" << *x << std::endl;
			x++;
			
		}
		x = tmpX;
		tmpX = NULL;
	}
	catch (std::bad_alloc e)
	{
		std::cout << "testexception::oexception::bad_alloc exception catched" << std::endl;
		return;
	}
	std::cout << "testexception::oexception::bad_alloc no excption "<<x<<"="<<*x<< std::endl;

	if (x != NULL)
	{
		delete x;
		x = NULL;
	}

}

void testexception::testResult()
{
	testexception::oexception::bad_alloc();
}
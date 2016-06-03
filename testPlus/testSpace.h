#pragma once


#include <iostream>


namespace
{
	void tPrint()
	{
		std::cout << "[testSpace.h] anonymous_namespace.print() called" << std::endl;
	}

	namespace tOldVersion
	{
		void vPrint()
		{
			std::cout << "[testSpace.h] tOldVersion.vPrint() called" << std::endl;
		}
	}

	inline namespace tVersion_1
	{
		void vPrint()
		{
			std::cout << "[testSpace.h] tVersion_1.vPrint() called" << std::endl;
		}
	}
}

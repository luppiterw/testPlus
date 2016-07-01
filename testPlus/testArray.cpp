#include "stdafx.h"
#include "testArray.h"
#include <iostream>

void testarray::print_cities()
{
	for (int i = 0; i < citySize; i++)
	{
		std::cout << i << " " << cities[i] << std::endl;
	}
}

void testarray::print_maxtemps()
{
	for (int r = 0; r < yearSize; r++)
	{
		for (int c = 0; c < citySize; c++)
		{
			std::cout << "[" << r << "] [" << c << "] " << maxtemps[r][c] << std::endl;
		}
		
	}
}
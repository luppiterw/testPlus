#pragma once

#define tab "\t" 
#include <iostream>

#include "testPrefs.h"

namespace testwcout
{
#define START_COMMENT		LOG_POINTERS + "testwcout started" + LOG_POINTERS
#define END_COMMENT			LOG_POINTERS + "testwcout ended" + LOG_POINTERS

	void printStartComment();

	void printTestCoutString();
	void printTestWCOUTCode();
}

#pragma once

namespace testpointer
{
	///< �Ƚ�*p++ �� *(p++)����
	const double dVals[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	const double* const pDVals = dVals;

	static double dyDVals[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	//double* pDyDVals;

	void printDistinguish();
}
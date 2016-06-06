#pragma once

namespace testprefs
{
	namespace comment_v0
	{
#define LOG_POINTERS "---------------" ///
		class TestPrefs
		{
		protected:
			virtual void printStart();
			virtual void printEnd();
		};
	}

	inline namespace comment_current
	{
#define LOG_POINTERS "**************" ///
		class TestPrefs : comment_v0::TestPrefs
		{
			///todo add self-defined interfaces
		};
	}
}

#define LOG_POINTERS testprefs::LOG_POINTERS



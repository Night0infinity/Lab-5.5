#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			double m = N(10, 8, 1 , depth);
			Assert::AreEqual(m, 2.);
		}
	};
}

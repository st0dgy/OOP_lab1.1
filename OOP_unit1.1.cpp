#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_lab1.1/Number.h"
#include "../OOP_lab1.1/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OOPunit11
{
	TEST_CLASS(OOPunit11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number number;
			int a = 1;
			int b = 2;
			bool t;
			t = number.Init(a, b);
			Assert::AreEqual(t, true);
		}
	};
}

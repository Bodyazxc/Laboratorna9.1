#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna9.1/var.h"
#include "../Laboratorna9.1/sum.h"
#include "../Laboratorna9.1/dod.h"
#include "../Laboratorna9.1/sum.cpp"
#include "../Laboratorna9.1/var.cpp"
#include "../Laboratorna9.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
	TEST_CLASS(UnitTest91)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::x = 1.2;
			nsVar::e = 0.00001;

			nsSum::sum();

			Assert::AreEqual(0.301194, nsVar::s, 0.0001);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "..//lab 1.1/Time.h"
#include "../lab 1.1/Time.cpp"
#include "../lab 1.1/Time.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labb11
{
	TEST_CLASS(Labb11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time time;
			Assert::IsTrue(time.Init(1, 30));
			Assert::IsFalse(time.Init(-1, 30));

		}
	};
}

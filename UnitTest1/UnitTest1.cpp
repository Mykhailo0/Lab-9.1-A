#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 9.1 A/9.1 A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			const int N = 3;
			Student students[N] = {
				{ "Ivanov", 5, 4, 5, 2, Spec::КН, 0 },
				{ "Petrov", 4, 5, 3, 3, Spec::ПЗ, 0 },
				{ "Sidorov", 5, 5, 5, 4, Spec::ФЛ, 0 }
			};
			int result = Physics(students, N);
			Assert::AreEqual(0, result);
		}
	};
}

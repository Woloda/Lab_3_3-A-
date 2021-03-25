#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_3.3(A)/FuzzyNumber.cpp"
#include "../Lab_3.3(A)/FuzzyNumber_Private.cpp"
#include "../Lab_3.3(A)/FuzzyNumber_Public.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab33A
{
	TEST_CLASS(UnitTestLab33A)
	{
	public:
		TEST_METHOD(Test_FuzzyNumber_Public)
		{
			FuzzyNumber_Public A(2.0, 3.0, 4.0),
				               B(2.0, 3.0, 4.0),
				               C(0.0, 0.0, 0.0);

			C = A + B;
			Assert::AreEqual(C.get_x(), -2.0);
		}

		TEST_METHOD(Test_FuzzyNumber_Private)
		{
			FuzzyNumber_Private A(2.0, 3.0, 4.0),
				                B(2.0, 3.0, 4.0),
								C(0.0, 0.0, 0.0);

			C = A + B;
			Assert::AreEqual(C.get_r(), 12.0);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestSumWithNegativeAndZeroValues)
        {
            // Test case where t contains negative and zero values
            int testArray1[5] = { -1, -6, 5, 0, -10 }; // Should sum -1 and -6
            Assert::AreEqual(-7, Sum(testArray1, 5, 0), L"Sum calculation is incorrect for testArray1");
        }

        TEST_METHOD(TestSumWithPositiveValues)
        {
            // Test case with only positive values
            int testArray2[5] = { 1, 2, 3, 4, 5 }; // Should sum 0
            Assert::AreEqual(0, Sum(testArray2, 5, 0), L"Sum calculation is incorrect for testArray2");
        }

        TEST_METHOD(TestSumWithAllPositiveNonMultiplesOfFive)
        {
            // Test case with all positive values that are multiples of 5
            int testArray4[5] = { 5, 10, 15, 20, 25 }; // Should sum 0
            Assert::AreEqual(0, Sum(testArray4, 5, 0), L"Sum calculation is incorrect for testArray4");
        }

        TEST_METHOD(TestSumWithAllZeroes)
        {
            // Test case with all zero values
            int testArray5[5] = { 0, 0, 0, 0, 0 }; // Should sum 0
            Assert::AreEqual(0, Sum(testArray5, 5, 0), L"Sum calculation is incorrect for testArray5");
        }
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../math_macros.h"
#include "../LB_13.2_1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Arrange
            double x = 2.0;
            double z = 6.0;
            double expected_w = MIN(x, z) * MAX(x + z, x * z); // Expected value based on the condition in main.cpp

            // Act
            double actual_w = calculateW(x, z); // Assuming the function in main.cpp is named calculateW and accessible

            // Assert
            Assert::AreEqual(expected_w, actual_w, L"Calculation of w is incorrect");
        }
    };
}

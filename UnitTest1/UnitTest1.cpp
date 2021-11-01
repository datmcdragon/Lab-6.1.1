#include "pch.h"
#include "CppUnitTest.h"
#include "../../Lab-6.1.1/Lab-6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int A[3] = { 8, -1, -4 };
            int t = CEArr(A, 3, 0);
            Assert::AreEqual(2, t);
        }
    };
}
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab12.3it/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            DoublyLinkedList list;

            list.insert(5);
            list.insert(-2);
            list.insert(10);
            list.insert(-3);
            list.insert(8);

            int expectedSum = 23;

            int actualSum = list.sumPositive();

            Assert::AreEqual(expectedSum, actualSum);
		}
	};
}

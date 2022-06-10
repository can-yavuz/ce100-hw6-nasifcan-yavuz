#ifdef _DEBUG
#pragma comment(lib, "../Debug/ce100-hw6-algo-lib-cs.lib")
#else
#pragma comment(lib, "../Release/ce100-hw6-algo-lib-cs.lib") 
#endif
#include "pch.h"
#include "CppUnitTest.h"
#include "ce100-hw6-algo-lib-cs.h"

/**
 * @file ce100-hw6-algo-test-cs.cpp
 * @author Can Yavuz
 * @date 10.6.2022
 *
 * @brief <b> HW-6 Tests </b>
 *
 * HW-6 Algo Test
 *
 * @see http://bilgisayar.mmf.erdogan.edu.tr/en/
 *
 */



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ce100hw6algotestcs
{
	TEST_CLASS(ce100hw6algotestcs)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			unsigned char K[20] = { 0x0b,0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b };
			Assert::AreEqual(HOTP(K, 123),123);
		}
	};
}

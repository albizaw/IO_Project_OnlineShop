#include "pch.h"
#include "CppUnitTest.h"
#include "../Projekt_IO_sklepInternetowy/Koszyk.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testyjednostkowe
{
	TEST_CLASS(testZwrcaniaWartosci)
	{
	public:

		TEST_METHOD(zwrocId)
		{
			Koszyk koszyk;
			Assert::AreEqual(0, koszyk.zwrocId());
		}
	};
}

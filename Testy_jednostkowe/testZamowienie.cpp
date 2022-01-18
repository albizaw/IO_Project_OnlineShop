#include "pch.h"
#include "CppUnitTest.h"
#include "../Projekt_IO_sklepInternetowy/Zamowienie.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testyjednostkowe
{
	TEST_CLASS(testZwrcaniaWartosci)
	{
	public:

		TEST_METHOD(zwrocIdZamowienia)
		{
			Zamowienie zamowienie;
			Assert::AreEqual(NULL, zamowienie.zwrocId());
		}
		TEST_METHOD(anulujZamowienie)
		{
			Zamowienie zamowienie(1);
			Assert::AreEqual(true, zamowienie.anulujZamowienie());
		}
		TEST_METHOD(zwrocOplacenie)
		{
			Zamowienie zamowienie(1);
			string odp = "nie";
			Assert::AreEqual(odp, zamowienie.zwrocOplacenie());
		}
		
		TEST_METHOD(zwrocStatus)
		{
			Zamowienie zamowienie(1);
			string status = "";
			Assert::AreEqual(status, zamowienie.zwrocStatus());
		}



	
	};
}

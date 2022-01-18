#include "pch.h"
#include "CppUnitTest.h"
#include "../Projekt_IO_sklepInternetowy/Item.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testyjednostkowe
{
	TEST_CLASS(testZwrcaniaWartosci)
	{
	public:
		
		TEST_METHOD(zwrocIloscSztuk)
		{
			Item item;
			Assert::AreEqual(0, item.zwrocIloscSztuk());
		}
		TEST_METHOD(zwrocNazweProduktu)
		{
			Produkt produkt("nazwa", 2, 2);
			Item item(produkt, 2);
			string nazwa = "nazwa";
			Assert::AreEqual(nazwa,item.zwrocNazweProduktu());
		}
	};
}

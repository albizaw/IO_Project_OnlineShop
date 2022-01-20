#include "pch.h"
#include "CppUnitTest.h"
#include "../Projekt_IO_sklepInternetowy/Produkt.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testyjednostkowe
{
	TEST_CLASS(testZwrcaniaWartosci)
	{
	public:

		TEST_METHOD(zwrocNazweProduktu)
		{
			Produkt produkt("testowany", 2.2, 2);
			string nazwa = "testowany";
			float cena = 2.2;
			unsigned int ilosc = 2;
			Assert::AreEqual(nazwa, produkt.zwrocNazwe());
		}
		TEST_METHOD(zwrocCeneProduktu)
		{
			Produkt produkt("testowany", 2.2, 2);
			string nazwa = "testowany";
			float cena = 2.2;
			unsigned int ilosc = 2;
			Assert::AreEqual(cena, produkt.zwrocCene());
		}
		TEST_METHOD(zwrocIloscProduktu)
		{
			Produkt produkt("testowany", 2.2, 2);
			string nazwa = "testowany";
			float cena = 2.2;
			unsigned int ilosc = 2;
			Assert::AreEqual(ilosc, produkt.zwrocIlosc());
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Projekt_IO_sklepInternetowy/Konto.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testyjednostkowe
{
	TEST_CLASS(testZwrcaniaWartosci)
	{
	public:

		TEST_METHOD(getPassword)
		{
			Konto konto("Pawel", "Zachwieja", "12345");
			string haslo = "12345";
			Assert::AreEqual(haslo, konto.getPassword());
		}
		TEST_METHOD(zwrocNazwisko)
		{
			Konto konto("Pawel", "Zachwieja", "12345");
			string nazwisko = "Zachwieja";
			Assert::AreEqual(nazwisko, konto.zwrocNazwisko());
		}
		TEST_METHOD(zwrocImie)
		{
			Konto konto("Pawel", "Zachwieja", "12345");
			string imie = "Pawel";
			Assert::AreEqual(imie, konto.zwrocImie());
		}
	};
}

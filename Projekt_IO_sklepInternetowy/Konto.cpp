#include "Konto.h"
#include <string>

using namespace std;

string Konto::getPassword()
{
	return Konto::haslo;
}

Konto::Konto(string imieKlienta, string nazwiskoKlienta, string haslo)
{
	Konto::imie = imieKlienta;
	Konto::nazwisko = nazwiskoKlienta;
	Konto::haslo = haslo;
}

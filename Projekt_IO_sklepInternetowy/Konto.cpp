#include "Konto.h"
#include <string>

using namespace std;

string Konto::getPassword()
{
	return Konto::haslo;
}

Konto::Konto()
{
	imie = "";
	nazwisko = "";
	haslo = "";
	koszykKlienta = NULL;
}

Konto::Konto(string imieKlienta, string nazwiskoKlienta, string hasloKlienta)
{
	Konto::imie = imieKlienta;
	Konto::nazwisko = nazwiskoKlienta;
	Konto::haslo = hasloKlienta;
	koszykKlienta = new Koszyk;
}


void Konto::dodajKlienta(string imieKlienta, string nazwiskoKlienta, string hasloKlienta)
{
	imie = imieKlienta;
	nazwisko = nazwiskoKlienta;
	haslo = hasloKlienta;
	koszykKlienta = new Koszyk;
}

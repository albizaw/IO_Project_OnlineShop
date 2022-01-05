#include "Konto.h"
#include <string>

using namespace std;

Konto::Konto(string imieKlienta, string nazwiskoKlienta, Klient id)
{
	Konto::imie = imieKlienta;
	Konto::nazwisko = nazwiskoKlienta;
	Konto::idKlienta = id;
}

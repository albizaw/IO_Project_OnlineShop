#pragma once
#include <string>
#include "Klient.h"

using namespace std;

class Konto {
private:
	string imie;
	string nazwisko;
	Klient idKlienta;
public:
	Konto(string imieKlienta, string nazwiskoKlienta, Klient id);
};
#pragma once
#include <string>
#include "Koszyk.h"

using namespace std;

class Konto {
private:
	string imie;
	string nazwisko;
	string haslo;
	Koszyk* koszykKlienta;
public:
	string getPassword();
	Konto();
	Konto(string imieKlienta, string nazwiskoKlienta, string haslo);
};
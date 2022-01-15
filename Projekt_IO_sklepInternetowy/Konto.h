#pragma once
#include <string>
#include "Koszyk.h"
#include <iostream>

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
	Konto(string imieKlienta, string nazwiskoKlienta, string hasloKlienta);
	void dodajKlienta(string imieKlienta, string nazwiskoKlienta, string hasloKlienta);
};
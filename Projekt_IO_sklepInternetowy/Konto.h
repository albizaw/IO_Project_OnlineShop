#pragma once
#include <string>
#include "Koszyk.h"
#include <iostream>;
using namespace std;

class Konto {
private:
	string imie;
	string nazwisko;
	string haslo;
	Koszyk* koszykKlienta;
public:
	/**
		* Zwraca haslo utworzonego uzytkownika.
		* @return haslo - typ string
		*/
	string getPassword();
	Konto();
	Konto(string imieKlienta, string nazwiskoKlienta, string haslo);
};
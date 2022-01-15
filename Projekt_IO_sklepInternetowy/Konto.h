#pragma once
#include <string>
#include "Koszyk.h"
#include <iostream>

using namespace std;

class Konto : public Koszyk {
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
	string zwrocImie();
	string zwrocNazwisko();
	Koszyk* zwrocAdresKoszyka();
	void wypisz();
};
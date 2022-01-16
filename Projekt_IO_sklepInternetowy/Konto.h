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
	/**
	* Zwraca haslo utworzonego uzytkownika.
	* @return haslo - typ string
	*/
	string getPassword();
	Konto();
	Konto(string imieKlienta, string nazwiskoKlienta, string hasloKlienta);
	void dodajKlienta(string imieKlienta, string nazwiskoKlienta, string hasloKlienta);
	/**
	* Zwraca imie utworzonego uzytkownika.
	* @return imie - typ string
	*/
	string zwrocImie();
	/**
	* Zwraca imie utworzonego uzytkownika.
	* @return imie - typ string
	*/
	string zwrocNazwisko();
	/**
	* Zwraca adres koszyka danego uzytkownika.
	* @return koszykKlienta
	*/
	Koszyk* zwrocAdresKoszyka();
	/**
	* Wypisuje informacje o koncie.
	* @return void
	*/
	void wypisz();
};
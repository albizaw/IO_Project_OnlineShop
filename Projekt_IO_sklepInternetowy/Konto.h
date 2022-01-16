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
	/**
			* Konstruktor domyslny klasy Konto
			* <p>
			* Tworzy nowy obiekt klasy Konto
			*/
	Konto();
	/**
		* Konstruktor parametryczny klasy Konto
		* <p>
		* Przyjmuje imie i nazwisko klienta oraz jego haslo, a nastepnie tworzy obiekt Konto z podanymi argumentami.
		* @param imieKlienta
		* @param nazwiskoKlienta
		* @param hasloKlienta
		*/
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
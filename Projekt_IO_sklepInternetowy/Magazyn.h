#pragma once
#include "./Produkt.h"
using namespace std;

class Magazyn : public Produkt
{
private:
	int iterator = 0;
	Produkt *produktyMagazyn[100];
public:
	Magazyn();
	/**
		* Zapisuje obiekt Produkt do tablicy produktyMagazyn
		* <p>
		*Metoda pozwala na dodawanie produktow typu {@link Produkt} do magazynu.
		*Uzywana jest ona przez administratora, ktory jako jedyny moze w pelni administrowac magazynem.
		* @return void
		*/
	void dodajProdukt(Produkt *nowyProdukt);
	/**
		* Usuwa produkt typu {@link Produkt} z magazynu.
		* @return void
		*/
	void usunProdukt(int pozycja);
	/**
		*Wyswietla liste produktow znajdujacych sie w magazynie.
		* <p>
		* Metoda pozwala wyswietlic wszystkie produkty typu {@link Produkt}, ktore znajduja sie w magazynie.
		* @return void
		*/
	void wyswietlListeProduktow();
};
#pragma once
#include "Produkt.h"

class Item {
private:
	int iloscSztuk;
	Produkt dodanyProdukt;
public:
	/**
		* Konstruktor domyslny klasy Item
		* <p>
		* Tworzy nowy obiekt klasy Item
		*/
	Item();
	/**
		* Konstruktor parametryczny klasy Item 
		* <p>
		* Przyjmuje obiekt typu Produkt oraz ilosc typu int.
		* @param dodawanyProdukt 
		* @param ilosc
		*/
	Item(Produkt dodawanyProdukt, int ilosc);
	/**
		* Zwaraca ilosc sztuk produktu, ktory zostanie dodany do koszyka.
		* @return ilosSztuk typu int
		*/
	int zwrocIloscSztuk();
	/**
		* Zwaraca nazwe produktu, ktory zostanie dodany do koszyka.
		* @return nazwa typu string
		*/
	string zwrocNazweProduktu();
};
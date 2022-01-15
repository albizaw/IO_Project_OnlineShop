#pragma once
#include "Produkt.h"

class Item {
private:
	int iloscSztuk;
	Produkt dodanyProdukt;
public:
	Item(Produkt dodawanyProdukt, int ilosc);
	/**
		* Zwaraca ilosc sztuk produktu, ktory zostanie dodany do koszyka.
		* @return int
		*/
	int zwrocIloscSztuk();
	/**
		* Zwaraca nazwe produktu, ktory zostanie dodany do koszyka.
		* @return string
		*/
	string zwrocNazweProduktu();
};
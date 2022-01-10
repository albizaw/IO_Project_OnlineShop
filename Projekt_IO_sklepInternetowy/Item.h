#pragma once
#include "Produkt.h"

class Item {
private:
	int iloscSztuk;
	Produkt dodanyProdukt;
public:
	Item(Produkt dodawanyProdukt, int ilosc);
	int zwrocIloscSztuk();
	string zwrocNazweProduktu();
};
#pragma once
#include "./Produkt.h"
using namespace std;

class Magazyn : public Produkt
{
private:
	Produkt *produktyMagazyn;
	unsigned int rozmiarMagazynu;
public:
	Magazyn(int);
	void dodajProdukt(Produkt nowyProdukt);
	void usunProdukt(Produkt produktDoUsuniecia);
	void wyswietlListeProduktow();
	unsigned int zwrocRozmiarMagazynu();
};
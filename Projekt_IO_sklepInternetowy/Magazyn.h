#pragma once
#include "./Produkt.h"
using namespace std;

class Magazyn : public Produkt
{
private:
	Produkt *produktyMagazyn[100];
public:
	Magazyn();
	void dodajProdukt(Produkt nowyProdukt);
	void usunProdukt(Produkt produktDoUsuniecia);
	void wyswietlListeProduktow();
};
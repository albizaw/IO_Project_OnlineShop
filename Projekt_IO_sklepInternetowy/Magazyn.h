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
	void dodajProdukt(Produkt *nowyProdukt);
	void usunProdukt(int pozycja);
	void wyswietlListeProduktow();
};
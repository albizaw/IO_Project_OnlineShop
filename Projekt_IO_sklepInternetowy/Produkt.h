#pragma once
#include <iostream>
#include <string>


using namespace std; 

class Produkt
{
private:
	string nazwa;
	float cena;
	unsigned int ilosc;
	bool dostepnosc;
public:
	Produkt();
	Produkt(string nazwaProduktu, float cenaProduktu, unsigned int iloscProduktu);
	void zmienIlosc(unsigned int nowaIlosc);
	void zmienCene(float nowaCena);
	void ustawProdukt(string nazwa, float cena, unsigned int ilosc);
	void wyswietlProdukt();
	string zwrocNazwe();
};
#pragma once
#include "Item.h"
#include "Zamowienie.h"

class Koszyk
{
private:
	//Item* produkt[10];
	int id;
	Item produkt[10];
	Zamowienie* noweZamowienie;
public:
	Koszyk();
	void dodajItem(Item dodawany);
	void usunItem(int id);
	void wypiszKoszyk();
};
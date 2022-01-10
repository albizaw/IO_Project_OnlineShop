#pragma once
#include "Item.h"
#include "Zamowienie.h"

class Koszyk
{
public:
	Koszyk();
	void dodajItem(Item dodawany);
	void usunItem(int id);
	void wypiszKoszyk();
private:
	Item *produkt[10];
	Zamowienie *noweZamowienie;
};
#include "Koszyk.h"

Koszyk::Koszyk()
{
	//*produkt = {NULL};
	id = 0;
	noweZamowienie = new Zamowienie;
}

void Koszyk::dodajItem(Item dodawany)
{
	if(id < 10) produkt[id] = dodawany;
	id++;
}

void Koszyk::usunItem(int id)
{
}

void Koszyk::wypiszKoszyk()
{
	
	for (int i = 0; i < id; i ++)
	{
		cout << i+1 << ". " << produkt[i].zwrocNazweProduktu() << " "
			<< produkt[i].zwrocIloscSztuk() << endl;
	}
}

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

int Koszyk::zwrocId()
{
	return id;
}

void Koszyk::usunItem(int idPrzedmiotuDoUsuniecia)
{
	Item tmp[10];
	int i = 0;
	int j = 0;
	
	cout << idPrzedmiotuDoUsuniecia << endl;
	while (i < id && j < id)
	{
		if (i == idPrzedmiotuDoUsuniecia) i++;
		else
		{
			tmp[j] = produkt[i];
			j++;
			i++;
		}
		
	}
	id--;

	for (i = 0; i < id; i++) produkt[i] = tmp[i];
}

Zamowienie* Koszyk::zwrocAdresZamowienia()
{
	return noweZamowienie;
}

void Koszyk::wypiszKoszyk()
{
	
	for (int i = 0; i < id; i ++)
	{
		cout << i+1 << ". " << produkt[i].zwrocNazweProduktu() << " "
			<< produkt[i].zwrocIloscSztuk() << endl;
	}
}

Item Koszyk::zwrocItem(int idItemu)
{
	return produkt[idItemu];
}
#include "./Magazyn.h"

using namespace std;

Magazyn::Magazyn()
{
	*produktyMagazyn = { NULL };
}

void Magazyn::dodajProdukt(Produkt *nowyProdukt)
{
	produktyMagazyn[iterator] = nowyProdukt;
	iterator++;
}

void Magazyn::usunProdukt(int pozycja)
{
	//produktyMagazyn[pozycja-1] = NULL;
	iterator--;
	
}

void Magazyn::wyswietlListeProduktow()
{
	int licznik = 1;
	for (int i = 0; i < iterator; i++)
	{
		if (produktyMagazyn[i] == NULL)
		{
			continue;
		}
		else
		{
			cout << licznik << ".";
			produktyMagazyn[i]->wyswietlProdukt();
			licznik++;
		}
		
	}
}

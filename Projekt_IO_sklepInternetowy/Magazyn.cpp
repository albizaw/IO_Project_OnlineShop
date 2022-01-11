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

void Magazyn::usunProdukt(Produkt produktDoUsuniecia)
{
}

void Magazyn::wyswietlListeProduktow()
{
	for (int i = 0; i < iterator; i++)
	{
		produktyMagazyn[i]->wyswietlProdukt();
	}
}

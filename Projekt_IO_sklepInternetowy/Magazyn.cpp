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
	produktyMagazyn[pozycja-1] = NULL;
}

void Magazyn::wyswietlListeProduktow()
{
	for (int i = 0; i < iterator; i++)
	{
		if (produktyMagazyn[i] == NULL) continue;
		cout << i + 1 << ".";
		produktyMagazyn[i]->wyswietlProdukt();
	}
}

#include "./Produkt.h"

using namespace std;

Produkt::Produkt()
{
	nazwa = "";
	cena = 0.0;
	ilosc = 0;
	dostepnosc = false;
}

Produkt::Produkt(string nazwaProduktu, float cenaProduktu, unsigned int iloscProduktu)
{
	nazwa = nazwaProduktu;
	if (cenaProduktu > 0) cena = cenaProduktu;
	ilosc = iloscProduktu;
	dostepnosc = true;
}

void Produkt::zmienIlosc(unsigned int nowaIlosc)
{
	ilosc = nowaIlosc;
	if (ilosc > 0)
	{
		dostepnosc = true;
	}
}

void Produkt::zmienCene(float nowaCena)
{
	cena = nowaCena;
}

void Produkt::ustawProdukt(string _nazwa, float _cena, unsigned int _ilosc)
{
	nazwa = _nazwa;
	cena = _cena;
	ilosc = _ilosc;
	dostepnosc = true;
}

void Produkt::wyswietlProdukt()
{
	cout << "Nazwa:" << nazwa << " " << "Cena:" << cena << " " << "Ilosc:" << ilosc << endl << endl;;
}

string Produkt::zwrocNazwe()
{
	return nazwa;
}

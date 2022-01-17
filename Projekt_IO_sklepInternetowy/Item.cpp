#include "Item.h"

Item::Item()
{
	iloscSztuk = 0;
}

Item::Item(Produkt dodawanyProdukt, int ilosc)
{
	iloscSztuk = ilosc;
	dodanyProdukt = dodawanyProdukt;
}

int Item::zwrocIloscSztuk()
{
	return iloscSztuk;
}

string Item::zwrocNazweProduktu()
{
	return dodanyProdukt.zwrocNazwe();
}



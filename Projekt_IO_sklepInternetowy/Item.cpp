#include "Item.h"

class Item
{
public:
	Item(int ilosc = 0) 
	{
		iloscSztuk = ilosc;
	};
	~Item();

private:
	int iloscSztuk;
};

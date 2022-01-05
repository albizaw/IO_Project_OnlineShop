#include "Item.h"

class MyClass
{
public:
	MyClass(int ilosc = 0) 
	{
		iloscSztuk = ilosc;
	};
	~MyClass();

private:
	int iloscSztuk;
};

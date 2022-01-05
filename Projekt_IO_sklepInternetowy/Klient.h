#pragma once
#include "Konto.h"

class Klient {
private:
	//Koszyk koszykKlienta;
	Konto* kontoKlienta;
public:
	void utworzKonto(string imieKlienta, string nazwiskoKlienta, Klient id);
};
#pragma once
#include <string>
#include "Klient.h"

using namespace std;

class Konto {
private:
	string imie;
	string nazwisko;
	string haslo;
public:
	string getPassword();
	Konto(string imieKlienta, string nazwiskoKlienta, string haslo);
};
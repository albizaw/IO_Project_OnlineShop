#ifndef KONTO_H
#define KONTO_H

class Konto {

private:
	string Imie;
	string Nazwisko;
	std::vector<Klient> Klient;

public:
	void utworz_konto();
};

#endif

#ifndef MAGAZYN_H
#define MAGAZYN_H

class Magazyn {

private:
	std::vector<Produkt> Produkt;

public:
	void dodajProdukt(int Produkt);

	void usunProdukt(int Produkt);

	void WyswietlListeProduktow();
};

#endif

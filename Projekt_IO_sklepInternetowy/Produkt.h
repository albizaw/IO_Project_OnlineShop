#ifndef PRODUKT_H
#define PRODUKT_H

class Produkt {

private:
	string Nazwa;
	float Cena;
	std::vector<int> Ilosc;

public:
	void zmienIlosc(int Ilosc, int Dotepnosc);

	void zmienCene(int Cena);
};

#endif

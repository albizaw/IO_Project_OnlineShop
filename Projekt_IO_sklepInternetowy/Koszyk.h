#ifndef KOSZYK_H
#define KOSZYK_H

class Koszyk {

private:
	std::vector<Item> Item;
	Zamowienie Zamowienie;

public:
	void dodajItem(int Item);

	void oplac_zamowienie(int zamowienie);
};

#endif

#pragma once

using namespace std;

class Zamowienie
{
private:
	int idZamowienia;
	bool oplacenieZamowienia;
public:
	Zamowienie();
	Zamowienie(int id);
	void anulujZamowienie();
	void akceptujZamowienie(bool platnosc);
	void realizujZamowienie();
};
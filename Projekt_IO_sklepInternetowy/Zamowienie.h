#pragma once
#include <string>;
#include <iostream>;

using namespace std;

class Zamowienie
{
private:
	int idZamowienia;
	string oplacenieZamowienia;
	string statusZamowienia;
public:
	Zamowienie();
	Zamowienie(int id);
	bool anulujZamowienie();
	void realizujZamowienie();
	void wypiszZamowienie();
	void ustawZamowienie(int id, string status, string czyOplacone);
	void zmienId();
	int zwrocId();
	string zwrocOplacenie();
	string zwrocStatus();
};
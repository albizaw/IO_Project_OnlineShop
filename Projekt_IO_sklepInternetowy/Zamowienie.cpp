#include "Zamowienie.h"

Zamowienie::Zamowienie()
{
	idZamowienia = NULL;
	oplacenieZamowienia = "";
	statusZamowienia = "";
}

Zamowienie::Zamowienie(int id)
{
	idZamowienia = id;
	oplacenieZamowienia = "nie";
}

bool Zamowienie::anulujZamowienie()
{
	if (oplacenieZamowienia == "nie" || statusZamowienia == "do_realizacji") return true;
	return false;
}

void Zamowienie::realizujZamowienie()
{
	if (oplacenieZamowienia == "tak") {
		statusZamowienia = "zrealizowane";
	}
	else cout << "\nZamowienie nie moze zostac zrealizowane poniewaz nie jest oplacone." << endl;
}

void Zamowienie::wypiszZamowienie()
{
	cout << "ID zamowienia: " << idZamowienia << endl;
	cout << "status zamowienia: " << statusZamowienia << endl;
	if (oplacenieZamowienia == "tak") {
		cout << "oplacone: TAK" << endl;
	}
	else cout << "oplacone: NIE" << endl;

}

void Zamowienie::ustawZamowienie(int id, string status, string czyOplacone)
{
	idZamowienia = id;
	statusZamowienia = status;
	oplacenieZamowienia = czyOplacone;
}

void Zamowienie::zmienId()
{
	idZamowienia--;
}

int Zamowienie::zwrocId()
{
	return idZamowienia;
}

string Zamowienie::zwrocOplacenie()
{
	return oplacenieZamowienia;
}

string Zamowienie::zwrocStatus()
{
	return statusZamowienia;
}

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
	/**
	* Konstruktor domyslny klasy Zamowienie
	* <p>
	* Tworzy nowy obiekt klasy Zamowienie
	*/
	Zamowienie();
	/**
	* Konstruktor parametryczny klasy Zamowienie
	* <p>
	* Przyjmuje id typu int.
	* @param id
	*/
	Zamowienie(int id);
	/**
	* Anuluje zamowienie
	* <p>
	* Zwraca true jezeli zamowienie jest nieop³acone lub status zamowienia jest do_realizacji
	* @return bool
	*/
	bool anulujZamowienie();
	/**
	* Realizowanie zamowienia
	* <p>
	* Zmienia wartosc statusZamowienia jezeli zamowienie jest oplacone, w innym przypadku wypisuje odpowiedni komunikat
	* @return void
	*/
	void realizujZamowienie();
	/**
	* Wypisuje parametry zamowienia
	* @return void
	*/
	void wypiszZamowienie();
	/**
	* Przypisuje podane wartosci obiektowi
	* <p>
	* Przypisuje podane przez uzytkownika wartosci dla danego zamowienia
	* @param id
	* @param status
	* @param czyOplacone
	* @return void
	*/
	void ustawZamowienie(int id, string status, string czyOplacone);
	/**
	* Zmniejsza wartosc idZamowienia o jeden
	* @return void
	*/
	void zmienId();
	/**
	* Zwraca id danego zamowienia
	* @return int
	*/
	int zwrocId();
	/**
	* Zwraca oplacenie zamowienia
	* @return string
	*/
	string zwrocOplacenie();
	/**
	* Zwraca status zamowienia
	* @return string
	*/
	string zwrocStatus();
};
#pragma once
#include <iostream>
#include <string>


using namespace std; 

class Produkt
{
private:
	string nazwa;
	float cena;
	unsigned int ilosc;
	bool dostepnosc;
public:
	/**
	* Konstruktor domyslny klasy produkt
	* <p>
	* Tworzy nowy obiekt typu produkt
	*/
	Produkt();
	/**
	* Konstruktor parametryczny klasy produkt
	* <p>
	* Tworzy nowy obiekt typu Produkt o parametrach nazwaProduktu typu string, cenaProduktu typu float oraz iloscProsuktu typu usigned int
	* @param nazwaProduktu
	* @param cenaProduktu
	* @param iloscProduktu
	*/
	Produkt(string nazwaProduktu, float cenaProduktu, unsigned int iloscProduktu);
	/**
	* Zmienia ilosc 
	* <p>
	* Przyjmuje parametr nowaIlosc typu unsigned int i przypisuje j¹ do zmiennej ilosc
	* @param nowaIlosc
	* @return void
	*/
	void zmienIlosc(unsigned int nowaIlosc);
	/**
	* Zmienia cene
	* <p>
	* Przyjmuje parametr nowaCena typu float i przypisuje go do zmiennej cena
	* @param nowaCena
	* @return void
	*/
	void zmienCene(float nowaCena);
	/**
	* Przypisuje podane wartosci obiektowi
	* <p>
	* Przypisuje podane przez uzytkownika wartosci dla danego produktu
	* @param nazwa
	* @param cena
	* @param ilosc
	* @return void
	*/
	void ustawProdukt(string nazwa, float cena, unsigned int ilosc);
	/**
	* Wypisuje na ekran parametry produktu
	* @return void
	*/
	void wyswietlProdukt();
	/**
	* Zwraca nazwe
	* @return string
	*/
	string zwrocNazwe();
	/**
	* Zwraca cene produktu
	* @return float
	*/
	float zwrocCene();
	/**
	* Zwraca ilosc produktu
	* @return unsigned int
	*/
	unsigned int zwrocIlosc();
};
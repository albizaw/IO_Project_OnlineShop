#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <ctime>
#include "Konto.h"
#include "Item.h"
#include "Koszyk.h"
#include "Magazyn.h"
#include "Produkt.h"
#include "Zamowienie.h"
#include <fstream>

void wait(int seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}

using namespace std;

int ekranStarowy()
{
	system("cls");
	cout << "----------------------------------------------------" << endl;
	cout << "	Witaj w naszym sklepie internetowym! " << endl;
	cout << "----------------------------------------------------" << endl << endl;

	int wybor = 0;

	while (wybor > 3 || wybor < 1)
	{

		cout << "1. Administrator" << endl << endl;
		cout << "2. Sprzedawca" << endl << endl;
		cout << "3. Klient" << endl << endl;
		cout << "Wybierz opcje 1 - 3: ";
		cin >> wybor;
		system("cls");
		return wybor;
	}

}

int menuAdministratora()
{

	int wybor = 0;

	while (wybor > 3 || wybor < 1)
	{

		cout << "1. Dodaj produkt" << endl << endl;
		cout << "2. Usun produkt" << endl << endl;
		cout << "3. Wyswietl liste produktow" << endl << endl;
		cout << "4. Wyjscie do ekranu startowego" << endl << endl;
		cout << "Wybierz opcje 1 - 4: ";
		cin >> wybor;
		system("cls");
		return wybor;
	}
}

int menuSprzedawcy()
{
	int wybor = 0;

	while (wybor > 3 || wybor < 1)
	{

		cout << "1. Wyœwietl zamówienia" << endl << endl;
		cout << "2. Realizuj zamówienie" << endl << endl;
		cout << "3. Anuluj zamowienie" << endl << endl;
		cout << "4. Wyjscie do ekranu startowego" << endl << endl;
		cout << "Wybierz opcje 1 - 3: ";
		cin >> wybor;
		system("cls");
		return wybor;
	}
}


//METODY DLA MENU KLIENTA

int menuLogowania()
{
	int wybor = 0;

	while (wybor < 1 || wybor > 3)
	{
		cout << "1. Zaloguj sie do swojego konta" << endl << endl;
		cout << "2. Utworz nowe konto" << endl << endl;
		cout << "3. Wyjscie do ekranu startowego" << endl << endl;
		cout << "Wybierz opcje 1 - 3: ";
		cin >> wybor;
		system("cls");
		return wybor;
	}
}

int tworzenieKontaKlienta(Konto tablicaKlientow[], int* j)
{
	cout << "-------------------------------------------------------------" << endl;
	cout << "	 W celu utworzenia nowego konta podaj wymagane dane:" << endl;
	cout << "    - imie" << endl << "    - nazwisko" << endl << "    - haslo" << endl;
	cout << "-------------------------------------------------------------" << endl << endl;

	string imie, nazwisko, haslo;

	cout << "podaj imie: ";
	cin >> imie;
	cout << endl;

	cout << "podaj nazwisko: ";
	cin >> nazwisko;
	cout << endl;

	cout << "podaj haslo: ";
	cin >> haslo;
	cout << endl;

	ofstream zapis("baza_klientow.txt", ios_base::app);
	zapis << endl << imie << endl;
	zapis << nazwisko << endl;
	zapis << haslo;
	zapis.close();
	*j = *j + 1;
	tablicaKlientow[*j].dodajKlienta(imie, nazwisko, haslo);
	return *j;
}

int logowanieKlienta(Konto tablicaKlientow[], int i)
{
	cout << "-------------------------------------------------------------" << endl;
	cout << "	 W celu zalogowania podaj wymagane dane:" << endl;
	cout << "    - imie" << endl << "    - nazwisko" << endl << "    - haslo" << endl;
	cout << "-------------------------------------------------------------" << endl << endl;

	string imie, nazwisko, haslo;
	bool czyDanePoprawne[3] = { false, false, false };
	int j = 0;

	cout << "podaj imie: ";
	cin >> imie;
	for (int j = 0; j <= i; j++)
	{
		if (tablicaKlientow[j].zwrocImie() == imie)
		{
			czyDanePoprawne[0] = true;
			break;
		}
	}

	while (!czyDanePoprawne[0])
	{
		cout << "Dane niepoprawne, sprobuj ponownie" << endl << "podaj imie: ";
		cin >> imie;
		if (tablicaKlientow[j].zwrocImie() == imie)
		{
			czyDanePoprawne[0] = true;
			break;
		}
	}

	cout << "podaj nazwisko: ";
	cin >> nazwisko;
	//for (j = 0; j <= i; j++)
	//{
		if (tablicaKlientow[j].zwrocNazwisko() == nazwisko)
		{
			czyDanePoprawne[1] = true;
			//break;
		}
	//}

	while (!czyDanePoprawne[1])
	{
		cout << "Dane niepoprawne, sprobuj ponownie" << endl << "podaj nazwisko: ";
		cin >> nazwisko;
		//for (int j = 0; j <= i; j++)
		//{
			if (tablicaKlientow[j].zwrocNazwisko() == nazwisko)
			{
				czyDanePoprawne[1] = true;
				break;
			}
		//}
	}

	cout << "podaj haslo: ";
	cin >> haslo;
	//for (j = 0; j <= i; j++)
	//{
		if (tablicaKlientow[j].getPassword() == haslo)
		{
			czyDanePoprawne[2] = true;
			//break;
		}
	//}

	while (!czyDanePoprawne[2])
	{
		cout << "Dane niepoprawne, sprobuj ponownie" << endl << "podaj haslo: ";
		cin >> haslo;
		//for (j = 0; j <= i; j++)
		//{
			if (tablicaKlientow[j].getPassword() == haslo)
			{
				czyDanePoprawne[2] = true;
				break;
			}
		//}
	}

	if (czyDanePoprawne[0] && czyDanePoprawne[1] & czyDanePoprawne[2])
	{
		return j;
	}

}

int menuKlienta()
{
	system("cls");
	
	int wybor = 0;

	cout << "-------------------------------------------------------------" << endl;
	cout << "	 Pomyslnie zalogowano. Wybierz co chcesz zrobic:" << endl;
	cout << "-------------------------------------------------------------" << endl << endl;
	
	while (wybor < 1 || wybor > 3)
	{
		cout << "1. Wyswietl liste produktow" << endl << endl;
		cout << "2. Edytuj koszyk" << endl << endl;
		cout << "3. Wyjscie do ekranu startowego (wylogowanie)" << endl << endl;
		cout << "Wybierz opcje 1 - 3: ";
		cin >> wybor;
		system("cls");
		return wybor;
	}
}

int wyswietlanieProduktowKlient(Magazyn magazyn)
{
	system("cls");
	cout << "-------------------------------------------------------------" << endl;
	cout << "	Dostepne produkty:" << endl;
	cout << "-------------------------------------------------------------" << endl << endl;

	magazyn.wyswietlListeProduktow();

	int wybor = 0;

	while (wybor < 1 || wybor > 2)
	{
		cout << "1. Dodaj produkty do koszyka." << endl;
		cout << "2. Powrot do panelu klienta." << endl << endl;
		cin >> wybor;
	}
	
	return wybor;
}

void dodajDoKoszyka(Konto tablicaKlientow[], int idKlienta, Produkt tablicaPrzedmiotow[])
{
	Koszyk *koszykKlienta;
	koszykKlienta = tablicaKlientow[idKlienta].zwrocAdresKoszyka();
	int idPrzedmiotu;
	int iloscPrzedmiotow;
	bool dodacKolejnyProdukt = false;

	cout << endl << "Podaj id przedmiotu, ktory chcesz dodac: ";
	cin >> idPrzedmiotu;
	idPrzedmiotu--;

	cout << endl << "Podaj ilosc przedmiotow, ktore chcesz dodac: ";
	cin >> iloscPrzedmiotow;
	while (tablicaPrzedmiotow[idPrzedmiotu].zwrocIlosc() < iloscPrzedmiotow || iloscPrzedmiotow < 1)
	{
		cout << "Ilosc nieprawidlowa, podaj jeszcze raz: ";
		cin >> iloscPrzedmiotow;
	}

	Item dodawanyItem(tablicaPrzedmiotow[idPrzedmiotu], iloscPrzedmiotow);

	koszykKlienta->dodajItem(dodawanyItem);
	koszykKlienta->wypiszKoszyk();

	cout << endl << "Czy chcesz dodac kolejny produkt?" << endl << "1. Tak"
		<< endl << "2. Nie" << endl << endl;
	if (_getch() == '1') dodajDoKoszyka(tablicaKlientow, idKlienta, tablicaPrzedmiotow);
	wait(1);
}

int menuKoszyka(Konto tablicaKlientow[], int idKlienta)
{
	cout << "-------------------------------------------------------------" << endl;
	cout << "	 Twoj koszyk:" << endl;
	cout << "-------------------------------------------------------------" << endl << endl;

	Koszyk* koszykKlienta;
	koszykKlienta = tablicaKlientow[idKlienta].zwrocAdresKoszyka();
	int wybor = 0;

	koszykKlienta->wypiszKoszyk();

	while (wybor < 1 || wybor > 3)
	{
		cout << endl << endl << "1. Dodaj nowy produkt do koszyka" << endl << endl;
		cout << "2. Usun produkt z koszyka" << endl << endl;
		cout << "3. Oplac koszyk" << endl << endl;
		cout << "Wybierz opcje 1 - 3: ";
		cin >> wybor;
		system("cls");
		return wybor;
	}
}

void usunPrzedmiotKoszyk(Konto tablicaKlientow[], int idKlienta)
{
	system("cls");
	cout << "-------------------------------------------------------------" << endl;
	cout << "	Usuwanie produktow z koszyka " << endl;
	cout << "-------------------------------------------------------------" << endl << endl;

	int idDoUsuniecia = 0;
	Koszyk* koszykKlienta;
	koszykKlienta = tablicaKlientow[idKlienta].zwrocAdresKoszyka();
	koszykKlienta->wypiszKoszyk();

	cout << endl << "Wybierz id przedmiotu do usuniecia: ";
	cin >> idDoUsuniecia;
	while (idDoUsuniecia<1 || idDoUsuniecia > koszykKlienta->zwrocId())
	{
		cout << endl << "Podane id jest nie prawidlowe, sprobuj jeszcze raz: ";
		cin >> idDoUsuniecia;
	}
	koszykKlienta->usunItem(idDoUsuniecia);

	cout << endl;
	koszykKlienta->wypiszKoszyk();

	cout << endl << "Czy chcesz usunac kolejny produkt?" << endl << "1. Tak"
		<< endl << "2. Nie" << endl << endl;
	if (_getch() == '1') usunPrzedmiotKoszyk(tablicaKlientow, idKlienta);
	wait(1);
}

/*Zamowienie* oplacenieKoszyka(Konto tablicaKlientow[], int idKlienta)
{
	Koszyk* koszykKlienta;
	koszykKlienta = tablicaKlientow[idKlienta].zwrocAdresKoszyka();

	system("cls");

	cout << "Czy mozemy Ci zaufac, ze oplaciles zamowienie?" << endl
		<< "1. Tak" << endl << "2. Jeszcze jak" << endl << "Wybierz cokolwiek" << endl;
	system("pause");


	//return tablicaKlientow[idKlienta].zwrocAdresZamowienia();
}*/

//SEKCJA METOD ADMINA

bool logowanieAdministatora(Konto adminLogowanie) {
	//to co robi administrator
		//logowanie
	
	string passAdmin = adminLogowanie.getPassword();
	string passAdminRight = adminLogowanie.getPassword();
	cout << "Wprowadz haslo administratora:	";
	for (int i = 0; i < passAdminRight.length(); i++)
	{
		passAdmin[i] = _getch();
		
		system("cls");
		cout << "Wprowadz haslo administratora:	";

		for (int j = 1; j <= i + 1; j++)
		{
			cout << "*";

		}
		
	}
	
	
	if (passAdmin == passAdminRight)
	{
		system("cls");
		cout << "zalogowano" << endl;
		return true;
	}
	else
	{
		system("cls");
		return false;
	}
}

bool logowanieSprzedawcy(Konto sprzedawcaLogowanie)
{
	string passDealer = sprzedawcaLogowanie.getPassword();
	string passDealerRight = sprzedawcaLogowanie.getPassword();
	cout << "Wprowadz haslo sprzedawcy:	";
	for (int i = 0; i < passDealerRight.length(); i++)
	{
		passDealer[i] = _getch();
		system("cls");
		cout << "Wprowadz haslo sprzedawcy:	";

		for (int j = 1; j <= i + 1; j++)
		{
			cout << "*";
		}

	}

	if (passDealer == passDealerRight)
	{
		system("cls");
		cout << "zalogowano" << endl;
		return true;
	}
	else
	{
		system("cls");
		return false;
	}
}


int main()
{
	//uwtorzenie obiektu magazyn do którego zostn¹ wpisane produkty umieszczone w pliku tekstowym baza_produktow.txt
	Magazyn magazyn;
	string nazwa;
	float cena;
	unsigned int ilosc;
	Produkt tablicaProduktow[100];
	int i = 0;
	ifstream odczyt("baza_produktow.txt");
	while (!odczyt.eof())
	{
		odczyt >> nazwa >> cena >> ilosc;
		tablicaProduktow[i].ustawProdukt(nazwa, cena, ilosc);
		magazyn.dodajProdukt(&tablicaProduktow[i]);
		i++;
	}
	odczyt.close();
	
	//utworzenie bazy klientow
	Konto tablicaKlientow[100];
	string imie;
	string nazwisko;
	string haslo;
	int iKlienckie = 0;
	ifstream odczytKlientow("baza_klientow.txt");
	while (!odczytKlientow.eof())
	{
		odczytKlientow >> imie >> nazwisko >> haslo;
		tablicaKlientow[iKlienckie].dodajKlienta(imie, nazwisko, haslo);
		iKlienckie++;
	}
	odczytKlientow.close();

	//utworzenie bazy zamowien
	string linia;
	ifstream odczytZamowien("baza_zamowien.txt");
	Zamowienie tablicaZamowien[100];
	int idZamowienia = 0;
	while (getline(odczytZamowien, linia))
	{
		if (idZamowienia > 99) break;
		int pozPrzecinka = linia.find(",");
		//int	pozKlamry = linia.find("{");
		tablicaZamowien[idZamowienia].ustawZamowienie(idZamowienia + 1, linia.substr(0, (pozPrzecinka - 1)), linia.substr(++pozPrzecinka));
		idZamowienia++;
	}
	odczytZamowien.close();

ekranStartowy:
	Konto administrator("Adam", "Minowski", "Silnehaslo123");
	Konto sprzedawca("Dawid", "Pala", "1234567890");
	int numerOpcji = ekranStarowy();
	if (numerOpcji == 1)
	{
		bool logowanieAdmin = logowanieAdministatora(administrator);
		int licznik = 1;
		while (logowanieAdmin == 0 && licznik != 3)
		{
			system("cls");
			logowanieAdmin = logowanieAdministatora(administrator);
			licznik++;
		}
		if (licznik == 3)
		{
			cout << "Wpisales bledne haslo. Przenosze do ekranu startowego" << endl;
			wait(3);
			system("cls");
			goto ekranStartowy;
		}

		//Poprawne zalogowanie do panelu administratora
		system("cls");
	adminMenu:
		system("cls");
		cout << "-------------------------------------------------------------" << endl;
		cout << "	Poprawnie zalogowano do panelu administratora " << endl;
		cout << "-------------------------------------------------------------" << endl << endl;

		int chooseAdmin = menuAdministratora();
		//Dodawanie produktu przez administratora do magazynu. Dopisany zostanie on automatycznie
		if (chooseAdmin == 1)
		{
			system("cls");
			cout << "-------------------------------------------------------------" << endl;
			cout << "	Dodawanie nowego produktu " << endl;
			cout << "-------------------------------------------------------------" << endl << endl;

			string nazwa;
			float cena;
			unsigned int ilosc;

			cout << "Nazwa produktu: ";
			cin >> nazwa;
			cout << "Cena: ";
			cin >> cena;
			cout << "Ilosc: ";
			cin >> ilosc;

			ofstream zapis("baza_produktow.txt", ios_base::app);
			zapis << endl << nazwa << endl;
			zapis << cena << endl;
			zapis << ilosc;

			tablicaProduktow[i].ustawProdukt(nazwa, cena, ilosc);
			cout <<  endl <<"-------------------------------------------------------------" << endl << endl;
			cout << "Dodany produkt:" << endl;
			tablicaProduktow[i].wyswietlProdukt();
			magazyn.dodajProdukt(&tablicaProduktow[i]);
			i++;
			zapis.close();
			wait(5);
			goto adminMenu;

		}

		//Usuwanie produktu przez administatora z magazynu. Zostanie równie¿ usuniêty z pliku baza_produktow.txt
		if (chooseAdmin == 2)
		{
			system("cls");
			cout << "-------------------------------------------------------------" << endl;
			cout << "	Usuwanie produktow z magazynu " << endl;
			cout << "-------------------------------------------------------------" << endl << endl;

			//wyswietlenie listy produktow
			magazyn.wyswietlListeProduktow();
			int wybor;
			cout << "x. Anuluj." << endl;
			cin >> wybor;
			if (wybor == 'x')
			{
				goto adminMenu;
			}
			magazyn.usunProdukt(wybor);
			
			//Przesuniêcie tablicy o 1 w lewo, po usuniêciu produktu
			for (int q = 0; q < 100; q++)
			{
				if (wybor-1==q)
				{
					for (int j = q; j < 100-1; j++)
					{
						tablicaProduktow[j] = tablicaProduktow[j + 1];
					}
					break;
				}
			}

			//czyszczenie pliku baza_produktow.txt
			std::ofstream ofs;
			ofs.open("baza_produktow.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();

			//wpisanie nowej tablicy do pliku
			ofstream zapis("baza_produktow.txt");
			for (int i = 0; i < 100; i++)
			{
				if (tablicaProduktow[i].zwrocNazwe() != "")
				{
					if (i == 0)
					{
						zapis << tablicaProduktow[i].zwrocNazwe() << endl;
						zapis << tablicaProduktow[i].zwrocCene() << endl;
						zapis << tablicaProduktow[i].zwrocIlosc();
					}
					else
					{
						zapis << endl << tablicaProduktow[i].zwrocNazwe() << endl;
						zapis << tablicaProduktow[i].zwrocCene() << endl;
						zapis << tablicaProduktow[i].zwrocIlosc();
					}
				}
			}
			zapis.close();
			odczyt.close();
			goto adminMenu;

		}

		//Wyswietlanie produktu przez administratora
		if (chooseAdmin == 3)
		{
			system("cls");
			cout << "-------------------------------------------------------------" << endl;
			cout << "	Wyswietlenie produktow z magazynu " << endl;
			cout << "-------------------------------------------------------------" << endl << endl;

			magazyn.wyswietlListeProduktow();

			int wybor;
			cout << "1. Powrot do panelu administratora." << endl;
			cout << "2. Powrot do menu glownego." << endl;
			cin >> wybor;
			if (wybor == 1)
			{
				goto adminMenu;
			}
			else if (wybor == 2)
			{
				goto ekranStartowy;
			}
		}
	
		//
		if (chooseAdmin == 4)
		{
			goto ekranStartowy;
		}
	}

	//menu sprzedawcy
	if (numerOpcji == 2)
	{

		bool logowanieSprzedawca = logowanieSprzedawcy(sprzedawca);
		int licznik = 1;
		while (logowanieSprzedawca == 0 && licznik != 3)
		{
			system("cls");
			logowanieSprzedawca = logowanieSprzedawcy(sprzedawca);
			licznik++;
		}
		if (licznik == 3)
		{
			cout << "Wpisales bledne haslo. Przenosze do ekranu startowego" << endl;
			wait(3);
			system("cls");
			goto ekranStartowy;
		}

	sprzedawcaMenu:
		system("cls");
		cout << "-------------------------------------------------------------" << endl;
		cout << "	Poprawnie zalogowano do panelu sprzedawcy " << endl;
		cout << "-------------------------------------------------------------" << endl << endl;

		int chooseDealer = menuSprzedawcy();

		if (chooseDealer == 1)
		{
			for (int i = 0; i < idZamowienia; i++)
			{
				tablicaZamowien[i].wypiszZamowienie();
			}
			int wybor;
			cout << "1. Powrot do panelu sprzedawcy." << endl;
			cout << "2. Powrot do menu glownego." << endl;
			cin >> wybor;

			if (wybor == 1)
			{
				goto sprzedawcaMenu;
			}
			else if (wybor == 2)
			{
				goto ekranStartowy;
			}

		}

		if (chooseDealer == 2)
		{
			//realizacja zamowien
			/*
			zmiana statusu zamówienia na zrealizowane w bazie zamówien
			*/
			while (true)
			{
				system("cls");
				for (int i = 0; i < idZamowienia; i++)
				{
					tablicaZamowien[i].wypiszZamowienie();
				}
				cout << "Wybierz id zamowienia do zrealizowania(aby wyjsc nacisnij X): ";
				string doRealizacji;
				cin >> doRealizacji;
				if (doRealizacji == "X" || doRealizacji == "x") goto sprzedawcaMenu;
				int realizacja = 0;
				stringstream geek(doRealizacji);
				geek >> realizacja;
				if (realizacja >= 1 && realizacja <= 100)
				{
					tablicaZamowien[realizacja - 1].realizujZamowienie();
					wait(3);
				}
				else
				{
					cout << "Podaj poprawny identyfikator" << endl;
					wait(2);
				}
			}
		}

		if (chooseDealer == 3)
		{
			while (true)
			{
				system("cls");
				for (int i = 0; i < idZamowienia; i++)
				{
					tablicaZamowien[i].wypiszZamowienie();
				}
				cout << "Wybierz id zamowienia do anulowania(aby wyjsc nacisnij X): ";
				string doAnulowania;
				cin >> doAnulowania;
				if (doAnulowania == "X" || doAnulowania == "x") goto sprzedawcaMenu;
				int anulowanie = 0;
				stringstream geek(doAnulowania);
				geek >> anulowanie;
				if (anulowanie >= 1 && anulowanie <= 100)
				{
					if (tablicaZamowien[anulowanie - 1].anulujZamowienie())
					{
						for (int i = anulowanie - 1; i <= idZamowienia; i++)
						{
							tablicaZamowien[i + 1].zmienId();
							tablicaZamowien[i] = tablicaZamowien[i + 1];
						}
						idZamowienia--;
						wait(3);
					}
					else
					{
						cout << "Zamowienie nie moze zostac anulowane!" << endl;
						wait(2);
					}
				}
				else
				{
					cout << "Podaj poprawny identyfikator" << endl;
					wait(2);
				}
			}
		}

		if (chooseDealer == 4)
		{
			std::ofstream ofs;
			ofs.open("baza_zamowien.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();
			ofstream zapisZamowien("baza_zamowien.txt");
			for (int i = 0; i < idZamowienia; i++)
			{
				zapisZamowien << tablicaZamowien[i].zwrocStatus() << "," << tablicaZamowien[i].zwrocOplacenie() << endl;
			}
			zapisZamowien.close();
			goto ekranStartowy;
		}

		//menu klienta
		if (numerOpcji == 3)
		{
			cout << "-------------------------------------------------------------" << endl;
			cout << "	 Aby kontynuowac zaloguj sie lub utworz nowe konto" << endl;
			cout << "-------------------------------------------------------------" << endl << endl;

			int wyborOpcji = menuLogowania();
			int idKlienta = 0;

			//logowanie na istniejace konto
			if (wyborOpcji == 1)
			{
				idKlienta = logowanieKlienta(tablicaKlientow, iKlienckie);
				goto klientMenu;
			}

			//utworzenie nowego konta
			if (wyborOpcji == 2)
			{
				idKlienta = tworzenieKontaKlienta(tablicaKlientow, &iKlienckie);
				goto klientMenu;
			}

			//powrot do ekranu startowego
			if (wyborOpcji == 3)
			{
				goto ekranStartowy;
			}

		klientMenu:
			wyborOpcji = menuKlienta();

			//wyswietlanie produktow 
			if (wyborOpcji == 1)
			{
				wyborOpcji = wyswietlanieProduktowKlient(magazyn);

				//dodanie przedmiotu do koszyka
				if (wyborOpcji == 1)
				{
					dodajDoKoszyka(tablicaKlientow, idKlienta, tablicaProduktow);
					goto klientMenu;
				}

				//powrot do panelu klienta
				if (wyborOpcji == 2)
				{
					goto klientMenu;
				}
			}

			if (wyborOpcji == 2)
			{
				wyborOpcji = menuKoszyka(tablicaKlientow, idKlienta);

				if (wyborOpcji == 1)
				{
					wyborOpcji = wyswietlanieProduktowKlient(magazyn);

					if (wyborOpcji == 1)
					{
						dodajDoKoszyka(tablicaKlientow, idKlienta, tablicaProduktow);
						goto klientMenu;
					}

					if (wyborOpcji == 2)
					{
						goto klientMenu;
					}
				}

				if (wyborOpcji == 2)
				{
					usunPrzedmiotKoszyk(tablicaKlientow, idKlienta);
					goto klientMenu;
				}

			if (wyborOpcji == 3)
			{
				Zamowienie* zamowienieKlienta;
				//zamowienieKlienta = oplacenieKoszyka(tablicaKlientow, idKlienta);
			}
		}

			if (wyborOpcji == 3)
			{
				goto ekranStartowy;
			}
		}

		system("pause");
	}
}
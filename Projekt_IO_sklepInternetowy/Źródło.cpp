#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <ctime>

void wait(int seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}

using namespace std;

int ekranStarowy()
{
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

bool logowanieAdministatora() {
	//to co robi administrator
		//logowanie
	char passAdmin[5];
	cout << "Wprowadz haslo administratora:	";
	for (int i = 0; i < 5; i++)
	{
		passAdmin[i] = _getch();
		system("cls");
		cout << "Wprowadz haslo administratora:	";

		for (int j = 1; j <= i + 1; j++)
		{
			cout << "*";
		}

	}

	if (strcmp(passAdmin, "admin") == 0)
	{
		system("cls");
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
ekranStartowy:

	int numerOpcji = ekranStarowy();
	if (numerOpcji == 1)
	{
		bool logowanieAdmin = logowanieAdministatora();
		int licznik = 1;
		while (logowanieAdmin == 0 && licznik != 3)
		{
			system("cls");
			logowanieAdmin = logowanieAdministatora();
			licznik++;
		}
		if (licznik == 3)
		{
			cout << "Wpisales bledne haslo. Przenosze do ekranu startowego" << endl;
			wait(2);
			system("cls");
			goto ekranStartowy;
		}
	}

	if (numerOpcji == 2)
	{
		//to co robi sprzedawca
	}

	if (numerOpcji == 3)
	{
		// to co robi klient
	}
}
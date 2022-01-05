#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "----------------------------------------------------" << endl;
	cout << "	Witaj w naszym sklepie internetowym! " << endl;
	cout << "----------------------------------------------------" << endl << endl;
	
	int wybor = 0;

	while(wybor > 3 || wybor < 1)
	{ 
		
		cout << "1. Administrator" << endl << endl;
		cout << "2. Sprzedawca" << endl << endl;
		cout << "3. Klient" << endl << endl;
		cout << "Wybierz opcje 1 - 3: ";
		cin >> wybor;
		system("cls");
		
	}

	switch (wybor)
	{
	case 1:
		// to co robi administrator
		break;

	case 2:
		// to co robi sprzedawca
		break;
	case 3:
		// to co robi klient
		break;
	};


}
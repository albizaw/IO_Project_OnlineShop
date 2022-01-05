#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "Witaj w naszym sklepie internetowym! " << endl;
	
	int wybor = 0;

	while(wybor > 3 || wybor < 1)
	{ 
		cout << "MENU" << endl;
		cout << "1.Administrator" << endl;
		cout << "2.Sprzedawca" << endl;
		cout << "3.Klient" << endl;

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

	case 3:
		// to co robi klient
	}


}
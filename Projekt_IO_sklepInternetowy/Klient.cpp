#include "Klient.h"
#include <string>

using namespace std;

void Klient::utworzKonto(string imieKlienta, string nazwiskoKlienta, Klient id)
{
	Klient::kontoKlienta = new Konto(imieKlienta, nazwiskoKlienta, id);
}

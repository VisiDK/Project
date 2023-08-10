#include <iostream>
#include <unistd.h>
#include <windows.h>
using namespace std;

int main (int argc, char * const argv[]) {
	
	int bank = 10000;
  int løn = 20000;
  int Bitcoin = 7853;
  int Bitcoins_bank = bank/7853;
	
	while (true) {

    cout << "<N> Nodea Bank <N>" << endl;
    cout << "" << endl;
    cout << "Konto: " << bank << endl;
    cout << "løn: " << løn << endl;
		cout << "bitcoins værdi: " << Bitcoin << endl;
    cout << "Bitcoins på konto: " << Bitcoins_bank << endl;
    cout << "" << endl;
    sleep(10);

	  bank = løn + 10000;
  }
}

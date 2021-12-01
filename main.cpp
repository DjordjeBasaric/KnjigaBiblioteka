#include <iostream>
#include "knjiga.h"
#include "biblioteka.h"
using namespace std;

int main() {
	char ime1[] = "Djordje";
	char ime2[] = "Jelisaveta";
	char ime3[] = "Ivan";

	char naziv1[] = "Lucani";
	char naziv2[] = "Pozega";
	char naziv3[] = "Beograd";

	Knjiga k(naziv1, ime1, Knjiga::redni_broj);
	Knjiga k2(naziv2, ime3, k.redni_broj);
	Knjiga k3(naziv3, ime2, k.redni_broj);
	//cout << k2.broj_knjiga;
	//cout << k << '\n' << k2 << '\n' << k3;
	
	char naziv[] = "Blb1";

	Biblioteka b(naziv, 2);

	b += k;
	b += k2;
	b += k3;
	cout << b;
	
}

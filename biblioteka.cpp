#include "biblioteka.h"

using namespace std;



int Biblioteka::br_knjiga = 0;

Biblioteka& operator+=(Biblioteka& b, Knjiga k)
{	
	if (b.br_knjiga >= b.max_knjiga) {
		printf("Nije imalo dovoljno mesta za sve knjige\n");
		return b;
	}
	Knjiga k2(k.dohNaz(), k.dohAut(), k.dohId());//ISPRAVITIIII
	
	b.dodaj(k2);
	b.br_knjiga++;
	return b;
}

void Biblioteka::dodaj(Knjiga knj){
	if (prvi == nullptr) {
		Elem* novi = new Elem(knj, nullptr);
		prvi = novi;
		posl = prvi;
	}
	else {
		Elem* novi = new Elem(knj, nullptr);
		posl->sled = novi;
		posl = novi;
	}
}



void operator<<(ostream& os, Biblioteka b) { b.ispis(); }

void Biblioteka::ispis() {
	Elem* tek = prvi;
	cout << "BIBLIOTEKA " << dohvNaziv() << " " << dohBrKnjiga() << "/" << dohMax() << endl;

	for (int i = 0; i < br_knjiga; i++) {
		cout << tek->k << endl;
		tek = tek->sled;
	}
}


void Biblioteka::dohvKnjigu(int br)
{	
	Elem* tek = prvi;
	for (int i = 0; i < br_knjiga; i++) {
		if (tek->k.dohId() == br) {
			cout << tek->k;
		}
		tek = tek->sled;
	}
	cout<<"Ne posotji taj ID";
	
	
}
/*
Biblioteka::~Biblioteka(){
	Elem* tek = prvi;
	while (tek) {
		Elem* stari = tek;
		tek = tek->sled;
		delete stari;
	}
}
*/

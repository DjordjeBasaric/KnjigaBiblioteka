#ifndef _biblioteka_h_
#define _biblioteka_h_
#include "knjiga.h"

class Biblioteka {
	char* naziv;
	int max_knjiga=0;
	struct Elem {
		Knjiga k;
		Elem* sled = nullptr;
		Elem(Knjiga k1, Elem* next) : k(k1), sled(next) {};
	};
	Elem* prvi = nullptr;
	Elem* posl = nullptr;
public:
	static int br_knjiga;
	
	Biblioteka(char* naz, int max) : naziv(naz), max_knjiga(max) {
		//br_knjiga++;
		
	}
	
	char* dohvNaziv() { return naziv; };
	int dohMax() { return max_knjiga; };
	int dohBrKnjiga() { return br_knjiga; };
	void ispis();
	void dodaj(Knjiga knj);
	
	friend Biblioteka& operator+=(Biblioteka& b, Knjiga k);
	friend void operator<<(ostream& os, Biblioteka b);

	void dohvKnjigu(int br);

	//~Biblioteka();

};




#endif

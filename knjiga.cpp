#include "knjiga.h"
#include <stdio.h>

int Knjiga::redni_broj=0;

Knjiga& operator!(Knjiga k)
{
	int id1 = k.id;
	char* autor1 = k.autor;
	char* naziv1 = k.naziv;
	Knjiga k2(naziv1, autor1, id1);
	return k2;
}

ostream& operator<<(ostream& os,const Knjiga &k){
	os << "KNJIGA " << k.id << " : " << k.naziv << " - " << k.autor;
	return os;
}

#ifndef _knjiga_h_
#define _knjiga_h_
using namespace std;
#include <iostream>
class Knjiga {
	
	char* naziv;
	char* autor;
	int id;

	

public:
	static int redni_broj;
	Knjiga(char* naz, char* aut, int br) : naziv(naz), autor(aut), id(br) {
		redni_broj++;
	}

	char* dohNaz()const { return naziv; };
	char* dohAut()const { return autor; };
	int dohId() const { return id; };
	void ispis();

	friend Knjiga& operator!(Knjiga k);
	friend ostream& operator<<(ostream& os,const Knjiga &k);

	//Knjiga& operator=(const Knjiga&) = delete;
	//Knjiga(const Knjiga& k) = delete;
	
	//Knjiga(Knjiga&& k) = delete;

	
};



#endif //_knjiga_h_


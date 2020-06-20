#include "Dengi.h"


Dengi Dengi::slojenie(Dengi& money ) {

	Dengi res(money);

	res.dobavlenie(*this);

	return res;
}

Dengi Dengi::vichitanie(Dengi& money){

	Dengi res(money);
	kop -= money.get_kop();

	ruble -= money.get_ruble() ;
	
	

	return res;
}

void Dengi::dobavlenie(Dengi& money){

	
		kop += money.get_kop();

		ruble += money.get_ruble() + ((kop >= 100) ? ((kop -= 100), 1) : 0);
	
}

Dengi Dengi::delenie(int kol){

	ruble = ruble / kol;

	kop = kop / kol;

	Dengi res(ruble, kop);

	return res;
}

bool Dengi::bolshe(Dengi money){

	if (ruble > money.get_ruble()) {

		return true;
	}
	else return false;


}
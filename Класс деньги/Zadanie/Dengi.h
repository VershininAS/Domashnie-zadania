#pragma once

#include <iostream>

class Dengi

{
	
public:
	Dengi(int ruble, int kop){

		this->ruble = ruble;
		this->kop = kop;

		

		ruble = ruble + kop / 100;
		kop = kop % 100;

	}

	

	Dengi(Dengi& money) {
		*this = money;
		
	}

	~Dengi() {
		
	}

	

private:
	int ruble;
	int kop;

	
public:
	void vivod() {

		std::cout << ruble << "," << kop << std::endl;
	}

	int get_ruble() {
		return ruble;
	}

	int get_kop() {
		return kop;
	}

	Dengi slojenie(Dengi& money);

	Dengi vichitanie(Dengi& money);

	void dobavlenie(Dengi& dengi);

	Dengi delenie(int kol);

	bool bolshe(Dengi dengi);

private:
	friend std::ostream& operator<<(std::ostream& ostr, const Dengi& arg) {
		return ostr << arg.ruble << "," << arg.kop;
	}
};


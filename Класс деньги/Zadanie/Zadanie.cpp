// Деньги, сложение

#include <iostream>
#include "Dengi.h"





int main()
{
	Dengi val1(50, 50);
	Dengi val2(44, 110);

	
	std::cout << val1.slojenie(val2) << std::endl;
	std::cout << val2.vichitanie(val1) << std::endl;
	std::cout << val1.delenie(4) << std::endl;
	std::cout << val2.bolshe(val1) << std::endl;

}


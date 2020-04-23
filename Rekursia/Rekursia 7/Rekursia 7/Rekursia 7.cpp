// Rekursia 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит число n, цифры которого все ненулевые (123456 можно, 120456 нельзя - проверьте ввод пользователя!!! 
// любым способом).  Получите число, записанное теми же цифрами, но в противоположном порядке (1234=>4321), 
// только с помощью арифметики и рекурсии. 
// Результатом работы рекурсивной функции должно быть целое число :: сигнатура :: int recursion_reverse(int number1){...} 
// например.. Нельзя выводить по одной цифре cout-ом


#include <iostream>
#include "Rekursia 7.h"


int recursion_reverse(int& number, int& number1)
{
	number1 = (number1 *10) + (number % 10);
	number /= 10;
	if (number > 0)
	{
		recursion_reverse(number, number1);
	}
	if (number <= 0)
	{
		return number1;
	}
	
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number = 0;
	int number1 = 0;

	std::cout << "Введите пятизначное число без нулей: ";
	
	int edin = 0;
	int des = 0;
	int sotni = 0;
	int tisacha = 0;
	int desat_tisach = 0;

	do
	{
		std::cin >> number;
		 edin = number % 10;
		 des = (number / 10) % 10;
		 sotni = (number / 100) % 10;
		 tisacha = (number / 1000) % 10;
		 desat_tisach = number / 10000;
	} while (number < 10000 || number >99999 || edin == 0 || des == 0 || sotni == 0 || tisacha == 0 || desat_tisach == 0);

	
	recursion_reverse(number, number1);
	
	std::cout << number1;
}


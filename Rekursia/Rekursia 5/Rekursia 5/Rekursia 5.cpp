// Rekursia 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит натуральное число N. Выведите все его цифры по одной, в обратном порядке. Рекурсией!


#include <iostream>
#include "Rekursia 5.h"

void Vichislenie(int& number)
{
	int ostatok = 0;
	ostatok = number % 10;

	if (number > 0)
	{
	std::cout << ostatok << " ";
		number /= 10;
		Vichislenie(number);

	}

	
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number = 0;

	std::cout << "\nВведите натуральное число: ";
	std::cin >> number;
	
	while (number < 0)
	{
		std::cin >> number;
	}

	Vichislenie(number);
}


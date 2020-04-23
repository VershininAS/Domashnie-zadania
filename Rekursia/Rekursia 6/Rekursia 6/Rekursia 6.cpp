// Rekursia 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит натуральное число n > 1. Простое ли это число? Рекурсией!

#include <iostream>
#include "Rekursia 6.h"

// Немного не понятно как это сделать рекурсией
// Число должно делится на 1 и на самого себя
// Если после проверки каждого условия вызывать рекурсию, она будет крутиться постоянно вокруг первого условия

void Prostoe_chislo(int& number)
{
	if (number % number == 0)
	{
		if (number % 1 == 0)
		{
			if (number % 2 == 0 || number % 3 == 0)
			{
				std::cout << "\nЧисло не является простым";
			}
			else
			std::cout << "\nЧисло простое";
		}
	}
	
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number = 0;

	std::cout << "Введите число больше 1: ";
	std::cin >> number;

	while (number < 1)
	{
		std::cin >> number;
	}

	Prostoe_chislo(number);
}


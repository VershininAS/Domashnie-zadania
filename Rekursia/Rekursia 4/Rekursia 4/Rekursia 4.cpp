// Rekursia 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит натуральное число N. Вычислите сумму его цифр. Рекурсией.. без этих Ваших циклов и прочих массивов. 

#include <iostream>
#include "Rekursia 4.h"

void Podschet_cifr(int& number, int schet)
{
	number /= 10;
	schet++;
	if (number > 0)
	{
		Podschet_cifr(number, schet);
	}
	else
		std::cout << "\nКоличество цифр в числе равно: " << schet;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number = 0;

	std::cout << "Введите натуральное число: ";
	std::cin >> number;

	Podschet_cifr(number,0);
}


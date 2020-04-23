// Rekursia 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит натуральное число n. Выведите все числа от 1 до n. (Проверьте, что пользователь ввёл натуральное число, а не что-нибудь ещё)


#include <iostream>
#include "Rekursia 1.h"





void Vivod(int& number, int number_1 )
{
		
	if (number_1 <= number)
	{
		std::cout << number_1 << " ";
		number_1++;
		Vivod(number, number_1);
	}

	

}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number = 0;

	std::cout << "Введите натуральное число: ";
	std::cin >> number;

	while (number < 0 )				// Если число отрицательное, оно не натуральное
	{
		std::cin >> number;
	}

	Vivod(number,1);				// Выводим все числа от 1 до number	
}


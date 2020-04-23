// Rekursia 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит натуральное число n, определить является число n точной степенью двойки (2,4,8,16,32,...). Стандартной библиотекой пользоваться нельзя.. Рекурсия - наше всё!

#include <iostream>

void Proverka(int number, int number1)
{
	number1 *= 2;
	if (number > number1)
	{
		Proverka(number, number1);
	}
	if (number % number1 > 0 && number <number1)
	{
		std::cout << "\nЧисло не является точной степенью двойки";

	}
	if (number == number1)
	{
		std::cout << "\nЧисло является точной степенью двойки";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number = 0;

	std::cout << "Введите натуральное число: ";
	std::cin >> number;

	Proverka(number, 1);
}


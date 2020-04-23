// Rekursia 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит два целых числа number1, number2. Выведите все числа от number1 до number2: [number1 .. number2], в порядке возрастания, если number1 < number2, или в порядке убывания, если наоборот. 


#include <iostream>

void Ubivanie(int number1, int number2)
{
	if (number1 >= number2)
	{
		std::cout << number1 << " ";
		number1--;
		Ubivanie(number1, number2);
	}
}

void Vozrastanie(int number1, int number2)
{
	if (number1 <= number2)
	{
		std::cout << number1 << " ";
		number1++;
		Vozrastanie(number1, number2);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number1 = 0;
	int number2 = 0;


	std::cout << "Введите 2 натуральных числа: ";
	std::cin >> number1;
	std::cin >> number2;


	while (number1 < 0 || number2 <0)				// Если число отрицательное, оно не натуральное
	{
		std::cin >> number1;
		std::cin >> number2;
	}

	if (number1 > number2)							// Если первое число больше, рекурсия по убыванию
	{
		Ubivanie(number1, number2);
	}

	if (number1 < number2)							// Если первое число меньше, рекурсия по возрастанию
	{
		Vozrastanie(number1, number2);
	}

}


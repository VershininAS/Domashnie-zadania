// Urok 6 № 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дана программа, которая определяет последнее положительное и первое отрицательное число в массиве. Найти и исправить синтаксические и логические
// ошибки.

#include <iostream>
using namespace std;
int main()
{
	int const  size = 9;
	double arr[size] = { -5.7, 6.0, 2, 0, -4.7, 6,	8.1, -4, 0 };
	double positive = 0;

	for (int i = 0; i <size; i++)
	{
		if (arr[i] > 0)
		{
			positive = arr[i];
			
		}
	}

	double negative = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			negative = arr[i];
			break;
		}
	}
	
		
		cout << "Last positive number: " << positive <<
		endl;
	cout << "First negatine number: " << negative <<
		endl;
	return 0;

}


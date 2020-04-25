// Vstrecha 28 № 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Написать функцию, которая получает указатель на статический массив и его размер.
// Функция распределяет положительные, отрицательные и нулевые элементы в отдельные динамические массивы.

#include <iostream>
#include <time.h>


void raspredelenie(int* arr, int& size)
{
	int size1 = NULL;
	int* arr2 = new int[size1];
	int size2 = NULL;
	int* arr3 = new int[size2];
	int size3 = NULL;
	int* arr4 = new int[size3];

	for (int i = 0; i < size; i++)
	{
		
		if (arr[i]==0)
		{

			arr2[size1++] = arr[i];

		}
		if (arr[i] > 0)
		{

			arr3[size2++] = arr[i];

		}
		if (arr[i] < 0)
		{

			arr4[size3++] = arr[i];

		}

	}

	std::cout << "\nВыводим первый массив: ";

	for (int i = 0; i < size1 ; i++)
	{
		std::cout << arr2[i] << " ";
	}

	std::cout << "\nВыводим второй массив: ";

	for (int i = 0; i < size2 ; i++)
	{
		std::cout << arr3[i] << " ";
	}

	std::cout << "\nВыводим третий массив: ";

	for (int i = 0; i < size3 ; i++)
	{
		std::cout << arr4[i] << " ";
	}

	

}


int main()
{
	setlocale(LC_ALL, "Russian");

	int size = 10;

	int* arr = new int[size];

	srand(time(0));
	rand();
	rand();
	rand();
	rand();

	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() * 100 / RAND_MAX) -50;
		std::cout << arr[i] << " ";
	}

	raspredelenie(arr, size);

	
	// Программа работает корректно, только в конце когда все массивы выведены срабатывает точка останова(((
	
}


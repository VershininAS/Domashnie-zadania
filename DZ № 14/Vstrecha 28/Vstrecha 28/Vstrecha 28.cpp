// Vstrecha 28.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Написать функцию, которая получает указатель на динамический массив и его размер.
// Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив.

#include <iostream>
#include <time.h>


int * udalenie(int* arr, int& size)
{
	int size1 = NULL;
	int* arr2 = new int[size1=size];

	for (int i = 0; i < size; i++)
	{
		// Если число  является простым, добавляем ноль в  другой массив

		if ((arr[i] % arr[i] == 0) && (arr[i] % 1 == 0) && (arr[i] % 2 != 0) && (arr[i] % 3 != 0))
		{
			
			arr2[i] = 0;

		}
		// Иначе переносим значение в другой массив
		else
			arr2[i] = arr[i];
		
	}
	

	return arr2;
	return &size1;
	
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
		arr[i] = (rand() * 100 / RAND_MAX)+1;
		std::cout << arr[i] << " ";
	}	

	
	std::cout << "\nВыводим новый массив: ";

	//Достаем новый массив из функции
	int *arr2 = udalenie(arr, size);
	int* size1= udalenie(arr, size);;
	//Выводим новый массив без простых чисел
	for (int i = 0; i < (*size1)-1; i++)
	{
		if (arr2[i] > 0)
		{
			std::cout << arr2[i] << " ";
		}
	}
	//РАБОТАЕТ!!!!!!!!!))))))))
}


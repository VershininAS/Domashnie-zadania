// Urok 6 № 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*В массиве хранится информация о стоимости 10 марок
автомобилей. Определить сумму наиболее дорогого
автомобиля и узнать его номер. Если таких автомобилей несколько, определить:

а) номер первого такого автомобиля;
б) номер последнего такого автомобиля.*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(0));
	rand(); rand(); rand(); rand(); rand();

	int stoimost_avto[10];

	cout << "Стоимость автомобилей: \n";

	for (int i = 0; i < 10; i++)
	{
		stoimost_avto[i] = (rand() * 50000 / RAND_MAX) + 10000;
		cout << stoimost_avto[i] << " ";
	}

	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		if (stoimost_avto[i] > max)
		{
			max = stoimost_avto[i];
		}
	}
	cout << "\nСтоимость самого дорогого автомобиля: " << max;

	for (int i = 0; i < 10; i++)
	{
		if (stoimost_avto[i] == max)
		{
			cout << "\nНомер самого дорогого автомобиля: " << i+1;
		}
	}

	// Ищем несколько дорогих авто, например дороже 50000

	int schet = 0;

	for (int i = 0; i < 10; i++)
	{
		if (stoimost_avto[i] > 50000)
		{
			schet++;
		}
	}

	if (schet > 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (stoimost_avto[i] > 50000)
			{
				cout << "\nСтоимость дорогого автомобиля(более 50000): " << stoimost_avto[i];
			}
		}

		for (int i = 0; i < 10; i++)
		{
			if (stoimost_avto[i] > 50000)
			{
				cout << "\nСтоимость дорогого автомобиля(более 50000): " << stoimost_avto[i];
			}
		}

		for (int i = 0; i < 10; i++)
		{
			if (stoimost_avto[i] > 50000)
			{
				cout << "\nНомер первого дорогого автомобиля(более 50000): " << i + 1; break;
			}
		}

		int bolee_50000 = 0;

		for (int i = 0; i < 10; i++)
		{
			if (stoimost_avto[i] > 50000)
			{
				bolee_50000 = i;
			}
		}

		cout << "\nНомер последнего дорогого автомобиля(более 50000): " << bolee_50000 + 1;
	}
}


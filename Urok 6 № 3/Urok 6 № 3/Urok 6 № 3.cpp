// Urok 6 № 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*
. Дана температура воздуха за каждый день января.
Определить:
а) среднюю температуру за месяц;
б) сколько раз температура воздуха опускалась ниже указанной метки.*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(0));
	rand(); rand(); rand(); rand(); rand(); rand();

	int janiary[31];

	for (int i = 0; i < 31; i++)
	{
		janiary[i] = (rand() * 30 / RAND_MAX) - 30;
		cout << janiary[i] << "\t";
	}

	int sred = 0;

	for (int i = 0; i < 31; i++)
	{
		sred = sred + janiary[i];
	}

	cout << "\n Средняя температура за месяц: " << sred / 31;

	int metka = 0;

	cout << "\nВведите метку: ";
	cin >> metka;
	cout << "\nТемпература за месяц опускалась ниже метки: ";

	int schet = 0;
	for (int i = 0; i < 31; i++)
	{
		if (janiary[i] < metka)
		{
			schet++;
		}
	}

	cout << schet << " раз ";

}




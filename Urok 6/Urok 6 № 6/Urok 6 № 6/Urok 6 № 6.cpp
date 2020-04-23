// Urok 6 № 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Заполнить два целочисленных массива A[10] и B[10].
Сформировать третий массив X[20], элементы которого будут взяты из A и B в порядке:
а) чередования (a0, b0, a1, b1, a2, b2, …, a9, b9);
б) следования (a0, a1, a2,…, a9, b0, b1, b2,…, b9).*/

#include <iostream>
#include <time.h>
using namespace std;

void zapolnenue(int mass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() * 50 / RAND_MAX;
		
	}
	}

void Vivod(int mass[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(0));
	rand(); rand(); rand(); rand(); rand();

	int A[10];
	int B[10];
	int X[20];

	zapolnenue(A, 10);
	zapolnenue(B, 10);

	cout << "\nВыводим массив А: ";
	Vivod(A, 10);
	cout << "\nВыводим массив В: ";
	Vivod(B, 10);

	//заполнение следованием

	for (int i = 0; i < 20; i++)
	{
		X[i] = A[i];
		if (i >= 10)
		{
			X[i] = B[i-10];
		}
	}

	cout << "\nВыводим массив X, следованием: ";
	Vivod(X, 20);

	//заполнение чередованием

	for (int i = 0; i < 20; i+=2)
	{
		if (i == 0)
		{
			X[i] = A[i];
		}
		else
			X[i] = A[i/2];
	}

	for (int i = 1; i < 20; i += 2)
	{
		if (i == 1)
		{
			X[i] = B[0];
		}
		else
			X[i] = B[i / 2];
	}

	cout << "\nВыводим массив X, чередованием: ";
	Vivod(X, 20);

}

// Vstrecha 27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Написать следующие функции для работы с динамическим массивом:
 Функция распределения динамической памяти
 Функция инициализации динамического массива
 Функция печати динамического массива
 Функция удаления динамического массива
 Функция добавления элемента в конец массива
 Функция вставки элемента по указанному индексу
 Функция удаления элемента по указанному индексу*/

#include <iostream>
#include <time.h>
#include "Vstrecha 27.h"



// Функция инициализации динамического массива

void inicializacia( int* mass, int size)
{
	srand(time(0));
	rand();
	rand();
	rand();
	rand();
	rand();

	for(int i = 0; i < size; i++)
	{
		mass[i] = rand() * 50 / RAND_MAX;
	}
	
}

// Функция печати динамического массива

void vivod( int* mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << mass[i] << " ";
	}
}

// Функция удаления динамического массива

void delete_mass(int* mass)
{
	delete[] mass;
	
}

// Функция добавления элемента в конец массива

void dobavlenie(int* mass, int size, int element)
{

	int* new_mass = new int[size + 1];

	for (int i = 0; i < size ; i++)
	{
		new_mass[i] = mass[i];
		
	}
	new_mass[size] = element;

	for (int i = 0; i < size + 1; i++)
	{
		std::cout << new_mass[i] << " ";
	}

}

// Функция вставки элемента по указанному индексу
	
void vstavka_po_indeksy(int* mass,  int index)
{
	mass[index - 1] = 88;
	
}


// Функция удаления элемента по указанному индексу

void udalenie_elementa(int*& mass, int& index1)
{
	
		 mass[index1-1]=NULL;	// Удалить не получается, выходит точка останова, изменить на ноль получается
		
}


int main()
{
	setlocale(LC_ALL, "Russian");

	int number = 0;


	std::cout << "Введите количество элементов массива: ";
	std::cin >> number;

	int* mass = new int[number];

	
	inicializacia( mass, number);

	std::cout << "\nВыводим массив: ";

	vivod(mass,  number);

	delete_mass(mass);

	std::cout << "\nВыводим массив после удаления: ";

	vivod(mass, number);

	std::cout <<"\nВведите количество элементов массива: ";
	std::cin >> number;

	
	inicializacia(mass, number);

	std::cout << "\nВыводим массив: ";

	vivod(mass, number);

	int element = 0;

	std::cout << "\nКакой элемент добавить в конец массива: ";
	std::cin >> element;


	std::cout << "\nДобавляем элемент в конец массива: ";

	dobavlenie(mass, number, element);

	int index = 0;

	std::cout << "\nНа какое место вставить 88?: ";
	std::cin >> index;				// Вводим новую переменную для индекса элемента вставки

	vstavka_po_indeksy(mass, index);
	vivod(mass, number);

	int index1 = 0;						// Вводим новую переменную для индекса элемента удаления

	std::cout << "\nКакой по счету элемент удалить?: ";
	std::cin >> index1;

	udalenie_elementa(mass, index1);
	vivod(mass, number);
	
}



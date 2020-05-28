

#include "Function.h"
#include <iostream>



struct Deti
{

	std::string Familia[6] = { "Иванов", "Петров", "Сидоров", "Титов", "Васнина", "Седых" };
	int Matem[6] = { 5,5,4,3,4,5 };
	int Biol[6] = { 3,4,3,3,5,5 };
	int Fizika[6] = { 4,4,4,5,3,4 };


};
//Deti* d = new Deti[uchenik];
void Menu()
{

	std::cout << "\nШкольный журнал."
		<< "\n (1) Посмотреть список класса с оценками по предметам"
		<< "\n (2) Посмотреть оценки по Биологии"
		<< "\n (3) Посмотреть оценки по Физике"
		<< "\n (4) Посмотреть оценки по Математике"
		<< "\n (5) Проверить доступ к экзамену(средний балл 4 и выше)"
		<< "\n (6) Добавить нового ученика"
		<< "\n (7) Изменить оценки ученика"
		<< "\n (8) Найти оценки конкретного ученика по фамилии"
		<< "\n (9) Удалить ученика"
		<< "\n (10) Выход из журнала"
		<< "\n Ваш выбор: ";
	while (menu < 1 || menu>10)
	{
		std::cin >> menu; std::cin.get();
	}




}

void Show(const Deti a[], int n)
{
	std::cout << "\nФамилия\t" << "\tМатематика\t" << "\tБиология\t" << "\tФизика\t"
		"\n________________________________________________________________________";
	for (int i = 0; i < n; i++)
	{
		if (a[i].Fizika[i] != 0) {
			std::cout << "\n" << a[i].Familia[i] << "\t\t" << a[i].Matem[i] << "\t\t\t" << a[i].Biol[i] << "\t\t\t" << a[i].Fizika[i];
		}
	}
	std::cout << "\n";

}


void Show_Biologia(const Deti a[], int n)
{
	std::cout << "\nФамилия\t" << "\tБиология\t" <<
		"\n_______________________________________";
	for (int i = 0; i < n; i++)
	{
		if (a[i].Fizika[i] != 0) {
			std::cout << "\n" << a[i].Familia[i] << "\t\t" << a[i].Biol[i];
		}
	}
	std::cout << "\n";

}

void Show_Fizika(const Deti a[], int n)
{
	std::cout << "\nФамилия\t" << "\tФизика\t"
		"\n_____________________________________";
	for (int i = 0; i < n; i++)
	{
		if (a[i].Fizika[i] != 0) {
			std::cout << "\n" << a[i].Familia[i] << "\t\t" << a[i].Fizika[i];
		}
	}
	std::cout << "\n";

}

void Show_Matem(const Deti a[], int n)
{
	std::cout << "\nФамилия\t" << "\tМатематика\t" <<
		"\n_________________________________________";
	for (int i = 0; i < n; i++)
	{
		if (a[i].Fizika[i] != 0) {
			std::cout << "\n" << a[i].Familia[i] << "\t\t" << a[i].Matem[i];
		}
	}
	std::cout << "\n";

}

void Dostup(const Deti a[], int n)
{
	std::cout << "\nК экзаменам допущены:";

	for (int i = 0; i < n; i++)
	{
		if (a[i].Fizika[i] != 0) {
			if (((a[i].Biol[i] + a[i].Fizika[i] + a[i].Matem[i]) / 3) >= 4)
			{
				std::cout << "\n" << a[i].Familia[i] << "\n";
			}

		}
	}

}

void Ocenki_uchenika(const Deti a[], int n, std::string f)
{
	std::cout << "\nФамилия\t" << "\tМатематика\t" << "\tБиология\t" << "\tФизика\t"
		"\n________________________________________________________________________";

	for (int i = 0; i < n; i++)
	{
		if (f == a[i].Familia[i])
		{
			if (a[i].Fizika[i] != 0) {
				std::cout << "\n" << a[i].Familia[i] << "\t\t" << a[i].Matem[i] << "\t\t\t" << a[i].Biol[i] << "\t\t\t" << a[i].Fizika[i];
			}
		}
	}std::cout << "\n";
}

void Ocenki_uchenika_smena(Deti a[], int n, std::string f)
{

	for (int i = 0; i < n; i++)
	{
		if (f == a[i].Familia[i])
		{
			int bufer;
			std::cout << "\nОценка по Физике: ";
			std::cin >> bufer;
			a[i].Fizika[i] = bufer;
			std::cout << "\nОценка по Математике: ";
			std::cin >> bufer;
			a[i].Matem[i] = bufer;
			std::cout << "\nОценка по Биологии: ";
			std::cin >> bufer;
			a[i].Biol[i] = bufer;
			break;
		}
	}
}

void Dobavit_uchenik(Deti a[], int n)		
{


	int bufer1 = 0;
	std::cout << "\nФамилия нового ученика: ";
	std::getline(std::cin, a[n].Familia[n]);
	std::cout << "\nОценки нового ученика математика, биология, физика: \n";
	std::cin >> bufer1;
	a[n].Matem[n] = bufer1;
	std::cin >> bufer1;
	a[n].Biol[n] = bufer1;
	std::cin >> bufer1;
	a[n].Fizika[n] = bufer1;

}

void Udalenie_uchenika(Deti a[], int n, std::string f)
{

	for (int i = 0; i < n; i++)
	{
		if (f == a[i].Familia[i])
		{

			a[i].Fizika[i] = 0; break;



		}
	}
}




// Baza Dannih.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//  База Данных Школьный журнал, заполняется учителем)))

#include <iostream>
#include < Windows.h >
#include <string>
#include "Function.h"





int main()
{
	// Русификация ввода-выводв
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Deti* d = new Deti[uchenik];
	std::string f;

	enum enum_menu
	{
		Vihod=10,
		Show_vse=1,
		Biologia=2,
		Fizika=3,
		Matem=4, 
		Dostup_ekz=5,
		Dobavit=6,
		smena_ocenok=7,
		Ocenki_odnogo=8,
		Udalenie=9



	};

	Menu();
	//Show(Deti, uchenik);
	while (menu != Vihod)
	{
		switch (menu)
		{
		case Show_vse: system("cls"); 
			Show(d, uchenik);
			system("pause");
			system("cls");
			menu = 0;				// меню переделываем в 0, иначе вечный цикл получается
			Menu();
			break;
		case Biologia: system("cls");
			Show_Biologia(d, uchenik);
			system("pause");
			system("cls");
			menu = 0;
			Menu();
			break;
		case Fizika: system("cls");
			Show_Fizika(d, uchenik);
			system("pause");
			system("cls");
			menu = 0;
			Menu();
			break;
		case Matem: system("cls");
			Show_Matem(d, uchenik);
			system("pause");
			system("cls");
			menu = 0;
			Menu();
			break;
		case Dostup_ekz: system("cls");
			Dostup(d, uchenik);
			system("pause");
			system("cls");
			menu = 0;			
			Menu();
			break;
		case Dobavit: system("cls");
			Dobavit_uchenik(d, uchenik);
			system("pause");
			system("cls");
			uchenik++;
			menu = 0;
			Menu();
			break;
		case smena_ocenok: system("cls");

			std::cout << "\nВведите фамилию ученика, оценки которого нужно изменить: ";
			std::getline(std::cin, f);

			Ocenki_uchenika_smena(d, uchenik, f);
			system("pause");
			system("cls");
			menu = 0;
			Menu();
			break;
		case Ocenki_odnogo: system("cls");
			
			std::cout << "\nВведите фамилию ученика: ";
			std::getline(std::cin, f);

			Ocenki_uchenika(d, uchenik, f);
			system("pause");
			system("cls");
			menu = 0;
			Menu();
			break;
			
		case Udalenie: system("cls");

			std::cout << "\nВведите фамилию ученика: ";
			std::getline(std::cin, f);

		Udalenie_uchenika(d, uchenik, f);
			system("pause");
			system("cls");
			menu = 0;
			Menu();
			break;
		}


	}
	
}




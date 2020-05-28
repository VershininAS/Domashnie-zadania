

#include "Function.h"
#include <iostream>



struct Deti
{

	std::string Familia[6] = { "������", "������", "�������", "�����", "�������", "�����" };
	int Matem[6] = { 5,5,4,3,4,5 };
	int Biol[6] = { 3,4,3,3,5,5 };
	int Fizika[6] = { 4,4,4,5,3,4 };


};
//Deti* d = new Deti[uchenik];
void Menu()
{

	std::cout << "\n�������� ������."
		<< "\n (1) ���������� ������ ������ � �������� �� ���������"
		<< "\n (2) ���������� ������ �� ��������"
		<< "\n (3) ���������� ������ �� ������"
		<< "\n (4) ���������� ������ �� ����������"
		<< "\n (5) ��������� ������ � ��������(������� ���� 4 � ����)"
		<< "\n (6) �������� ������ �������"
		<< "\n (7) �������� ������ �������"
		<< "\n (8) ����� ������ ����������� ������� �� �������"
		<< "\n (9) ������� �������"
		<< "\n (10) ����� �� �������"
		<< "\n ��� �����: ";
	while (menu < 1 || menu>10)
	{
		std::cin >> menu; std::cin.get();
	}




}

void Show(const Deti a[], int n)
{
	std::cout << "\n�������\t" << "\t����������\t" << "\t��������\t" << "\t������\t"
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
	std::cout << "\n�������\t" << "\t��������\t" <<
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
	std::cout << "\n�������\t" << "\t������\t"
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
	std::cout << "\n�������\t" << "\t����������\t" <<
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
	std::cout << "\n� ��������� ��������:";

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
	std::cout << "\n�������\t" << "\t����������\t" << "\t��������\t" << "\t������\t"
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
			std::cout << "\n������ �� ������: ";
			std::cin >> bufer;
			a[i].Fizika[i] = bufer;
			std::cout << "\n������ �� ����������: ";
			std::cin >> bufer;
			a[i].Matem[i] = bufer;
			std::cout << "\n������ �� ��������: ";
			std::cin >> bufer;
			a[i].Biol[i] = bufer;
			break;
		}
	}
}

void Dobavit_uchenik(Deti a[], int n)		
{


	int bufer1 = 0;
	std::cout << "\n������� ������ �������: ";
	std::getline(std::cin, a[n].Familia[n]);
	std::cout << "\n������ ������ ������� ����������, ��������, ������: \n";
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




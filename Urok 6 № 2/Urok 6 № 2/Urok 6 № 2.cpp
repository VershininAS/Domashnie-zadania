﻿// Urok 6 № 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*В массиве хранится информация о количестве жильцов
каждой квартиры пятиэтажного дома(4 подъезда, на
	каждом этаже по 2 квартиры).
	а) по выбранному номеру квартиры определить количество жильцов, а также их соседей проживающих
	на одном этаже;
б) определить суммарное количество жильцов для
каждого подъезда;
в) определить номера квартир, где живут многодетные
семьи.Условно будем считать таковыми, у которых
количество членов семьи превышает пять человек.*/

#include <iostream>
#include <time.h>
using namespace std;

int Kvartira(int i,int j)
{
	if (i==0&&j==0)
	{
		cout << "\nКвартира 1 "; 
	}
	if (i == 0 && j == 1)
	{
		cout << "\nКвартира 2 ";
	}
	if (i == 0&& j == 2)
	{
		cout << "\nКвартира 3 ";
	}
	if (i == 0 &&  j == 3)
	{
		cout << "\nКвартира 4 ";
	}
	if (i == 0 && j == 4)
	{
		cout << "\nКвартира 5 ";
	}
	if (i == 0 && j == 5)
	{
		cout << "\nКвартира 6 ";
	}
	if (i == 0 && j == 6)
	{
		cout << "\nКвартира 7 ";
	}
	if (i == 0 && j == 7)
	{
		cout << "\nКвартира 8 ";
	}
	if (i == 1 && j == 0)
	{
		cout << "\nКвартира 9 ";
	}
	if (i == 1 && j == 1)
	{
		cout << "\nКвартира 10 ";
	}
	if (i == 1 && j == 2)
	{
		cout << "\nКвартира 11 ";
	}
	if (i == 1 && j == 3)
	{
		cout << "\nКвартира 12 ";
	}
	if (i == 1 && j == 4)
	{
		cout << "\nКвартира 13 ";
	}
	if (i == 1 && j == 5)
	{
		cout << "\nКвартира 14 ";
	}
	if (i == 1 && j == 6)
	{
		cout << "\nКвартира 15 ";
	}
	if (i == 1 && j ==7)
	{
		cout << "\nКвартира 16 ";
	}
	if (i == 2 && j == 0)
	{
		cout << "\nКвартира 17 ";
	}
	if (i == 2 && j == 1)
	{
		cout << "\nКвартира 18 ";
	}
	if (i == 2 && j == 2)
	{
		cout << "\nКвартира 19 ";
	}
	if (i == 2 && j == 3)
	{
		cout << "\nКвартира 20 ";
	}
	if (i == 2 && j == 4)
	{
		cout << "\nКвартира 21 ";
	}
	if (i == 2 && j == 5)
	{
		cout << "\nКвартира 22 ";
	}
	if (i == 2 && j == 6)
	{
		cout << "\nКвартира 23 ";
	}
	if (i == 2 && j == 7)
	{
		cout << "\nКвартира 24 ";
	}
	if (i == 3 && j == 0)
	{
		cout << "\nКвартира 25 ";
	}
	if (i == 3 && j == 1)
	{
		cout << "\nКвартира 26 ";
	}
	if (i == 3 && j == 2)
	{
		cout << "\nКвартира 27 ";
	}
	if (i == 3 && j ==3)
	{
		cout << "\nКвартира 28 ";
	}
	if (i == 3 && j == 4)
	{
		cout << "\nКвартира 29 ";
	}
	if (i == 3 && j == 5)
	{
		cout << "\nКвартира 30 ";
	}
	if (i == 3 && j == 6)
	{
		cout << "\nКвартира 31 ";
	}
	if (i == 3 && j == 7)
	{
		cout << "\nКвартира 32 ";
	}
	if (i == 4 && j == 0)
	{
		cout << "\nКвартира 33 ";
	}
	if (i == 4 && j == 1)
	{
		cout << "\nКвартира 34 ";
	}
	if (i == 4 && j == 2)
	{
		cout << "\nКвартира 35 ";
	}
	if (i == 4 && j == 3)
	{
		cout << "\nКвартира 36 ";
	}
	if (i == 4 && j == 4)
	{
		cout << "\nКвартира 37 ";
	}
	if (i == 4 && j == 5)
	{
		cout << "\nКвартира 38 ";
	}
	if (i == 4 && j == 6)
	{
		cout << "\nКвартира 39 ";
	}
	if (i == 4 && j == 7)
	{
		cout << "\nКвартира 40 ";
	}
	return 0;


}

int main()
{

	setlocale(LC_ALL, "Russian");

	srand(time(0));
	rand(); rand(); rand(); rand(); rand(); rand();

	int dom[5][8];

	// Выводим массив дома на экран

	

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			dom[i][j] = (rand() * 6 / RAND_MAX) + 1;
			cout << dom[i][j] << "\t";
		}
		cout << endl;
	}

	int number = 0;

	cout << "\n В доме 40 квартир, выберите номер квартиры\n" <<
		"Чтобы определить количество жильцов в квартире, а также их соседей на этаже: ";
	cin >> number;

	while(number<1 || number > 40)
	{
		cin >> number;
	}

	
	switch (number)
	{
	case 1: cout << "\nКоличество жильцов в квартире: " << dom[0][0] <<
		"\nЧисло их соседей на этаже: " << dom[0][1]; break;
	case 2: cout << "\nКоличество жильцов в квартире: " << dom[0][1] <<
		"\nЧисло их соседей на этаже: " << dom[0][0]; break;
	case 3: cout << "\nКоличество жильцов в квартире: " << dom[0][2] <<
		"\nЧисло их соседей на этаже: " << dom[0][3]; break;
	case 4: cout << "\nКоличество жильцов в квартире: " << dom[0][3] <<
		"\nЧисло их соседей на этаже: " << dom[0][2]; break;
	case 5: cout << "\nКоличество жильцов в квартире: " << dom[0][4] <<
		"\nЧисло их соседей на этаже: " << dom[0][5]; break;
	case 6: cout << "\nКоличество жильцов в квартире: " << dom[0][5] <<
		"\nЧисло их соседей на этаже: " << dom[0][4]; break;
	case 7: cout << "\nКоличество жильцов в квартире: " << dom[0][6] <<
		"\nЧисло их соседей на этаже: " << dom[0][7]; break;
	case 8: cout << "\nКоличество жильцов в квартире: " << dom[0][7] <<
		"\nЧисло их соседей на этаже: " << dom[0][6]; break;
	case 9: cout << "\nКоличество жильцов в квартире: " << dom[1][0] <<
		"\nЧисло их соседей на этаже: " << dom[1][1]; break;
	case 10: cout << "\nКоличество жильцов в квартире: " << dom[1][1] <<
		"\nЧисло их соседей на этаже: " << dom[1][0]; break;
	case 11: cout << "\nКоличество жильцов в квартире: " << dom[1][2] <<
		"\nЧисло их соседей на этаже: " << dom[1][3]; break;
	case 12: cout << "\nКоличество жильцов в квартире: " << dom[1][3] <<
		"\nЧисло их соседей на этаже: " << dom[1][2]; break;
	case 13: cout << "\nКоличество жильцов в квартире: " << dom[1][4] <<
		"\nЧисло их соседей на этаже: " << dom[1][5]; break;
	case 14: cout << "\nКоличество жильцов в квартире: " << dom[1][5] <<
		"\nЧисло их соседей на этаже: " << dom[1][4]; break;
	case 15: cout << "\nКоличество жильцов в квартире: " << dom[1][6] <<
		"\nЧисло их соседей на этаже: " << dom[1][7]; break;
	case 16: cout << "\nКоличество жильцов в квартире: " << dom[1][7] <<
		"\nЧисло их соседей на этаже: " << dom[1][6]; break;
	case 17: cout << "\nКоличество жильцов в квартире: " << dom[2][0] <<
		"\nЧисло их соседей на этаже: " << dom[2][1]; break;
	case 18: cout << "\nКоличество жильцов в квартире: " << dom[2][1] <<
		"\nЧисло их соседей на этаже: " << dom[2][0]; break;
	case 19: cout << "\nКоличество жильцов в квартире: " << dom[2][2] <<
		"\nЧисло их соседей на этаже: " << dom[2][3]; break;
	case 20: cout << "\nКоличество жильцов в квартире: " << dom[2][3] <<
		"\nЧисло их соседей на этаже: " << dom[2][2]; break;
	case 21: cout << "\nКоличество жильцов в квартире: " << dom[2][4] <<
		"\nЧисло их соседей на этаже: " << dom[2][5]; break;
	case 22: cout << "\nКоличество жильцов в квартире: " << dom[2][5] <<
		"\nЧисло их соседей на этаже: " << dom[2][4]; break;
	case 23: cout << "\nКоличество жильцов в квартире: " << dom[2][6] <<
		"\nЧисло их соседей на этаже: " << dom[2][7]; break;
	case 24: cout << "\nКоличество жильцов в квартире: " << dom[2][7] <<
		"\nЧисло их соседей на этаже: " << dom[2][6]; break;
	case 25: cout << "\nКоличество жильцов в квартире: " << dom[3][0] <<
		"\nЧисло их соседей на этаже: " << dom[3][1]; break;
	case 26: cout << "\nКоличество жильцов в квартире: " << dom[3][1] <<
		"\nЧисло их соседей на этаже: " << dom[3][0]; break;
	case 27: cout << "\nКоличество жильцов в квартире: " << dom[3][2] <<
		"\nЧисло их соседей на этаже: " << dom[3][3]; break;
	case 28: cout << "\nКоличество жильцов в квартире: " << dom[3][3] <<
		"\nЧисло их соседей на этаже: " << dom[3][2]; break;
	case 29: cout << "\nКоличество жильцов в квартире: " << dom[3][4] <<
		"\nЧисло их соседей на этаже: " << dom[3][5]; break;
	case 30: cout << "\nКоличество жильцов в квартире: " << dom[3][5] <<
		"\nЧисло их соседей на этаже: " << dom[3][4]; break;
	case 31: cout << "\nКоличество жильцов в квартире: " << dom[3][6] <<
		"\nЧисло их соседей на этаже: " << dom[3][7]; break;
	case 32: cout << "\nКоличество жильцов в квартире: " << dom[3][7] <<
		"\nЧисло их соседей на этаже: " << dom[3][6]; break;
	case 33: cout << "\nКоличество жильцов в квартире: " << dom[4][0] <<
		"\nЧисло их соседей на этаже: " << dom[4][1]; break;
	case 34: cout << "\nКоличество жильцов в квартире: " << dom[4][1] <<
		"\nЧисло их соседей на этаже: " << dom[4][0]; break;
	case 35: cout << "\nКоличество жильцов в квартире: " << dom[4][2] <<
		"\nЧисло их соседей на этаже: " << dom[4][3]; break;
	case 36: cout << "\nКоличество жильцов в квартире: " << dom[4][3] <<
		"\nЧисло их соседей на этаже: " << dom[4][2]; break;
	case 37: cout << "\nКоличество жильцов в квартире: " << dom[4][4] <<
		"\nЧисло их соседей на этаже: " << dom[4][5]; break;
	case 38: cout << "\nКоличество жильцов в квартире: " << dom[4][5] <<
		"\nЧисло их соседей на этаже: " << dom[4][4]; break;
	case 39: cout << "\nКоличество жильцов в квартире: " << dom[4][6] <<
		"\nЧисло их соседей на этаже: " << dom[4][7]; break;
	case 40: cout << "\nКоличество жильцов в квартире: " << dom[4][7] <<
		"\nЧисло их соседей на этаже: " << dom[4][6]; break;

	}

	// Суммарное количество жильцов для каждого подьезда

	int Pod_1 = 0;
	int Pod_2 = 0;
	int Pod_3 = 0;
	int Pod_4 = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j == 1 || j == 0)
			{
				Pod_1 = Pod_1 + dom[i][j];
			}
			if (j == 2 || j == 3)
			{
				Pod_2 = Pod_2 + dom[i][j];
			}
			if (j == 4 || j == 5)
			{
				Pod_3 = Pod_3 + dom[i][j];
			}
			if (j == 6 || j == 7)
			{
				Pod_4 = Pod_4 + dom[i][j];
			}
		}
	}

	cout << "\nВсего жильцов в первом подьезде: " << Pod_1;
	cout << "\nВсего жильцов во втором подьезде: " << Pod_2;
	cout << "\nВсего жильцов в третьем подьезде: " << Pod_3;
	cout << "\nВсего жильцов в четвертом подьезде: " << Pod_4;

	cout << "\nНомера кватрир с многодетными родителями: ";

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (dom[i][j] > 5)
			{
				Kvartira(i,j);
			}
		}
	}


}
		
// Morskoi Boi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Morskoi Boi.h"

//определим границы игрового поля

// Ширина игрового поля 
const int WORLD_HEIGHT = 11;

// Высота игрового поля
const int  WORLD_WIDTH = 11;

// Игровое поле размером 10x10 клеток

void One_k(int& One_x, int& One_y, char  map_user[11][11], char  One_flor[1]);

void Two_k(int& Two_x, int& Two_y,  char  map_user[11][11], char  One_flor[1]);
void Three_k(int& Two_x, int& Two_y, char  map_user[11][11], char  One_flor[1]);
void vivod(char map[WORLD_HEIGHT][WORLD_WIDTH]);



int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	rand(); rand(); rand(); rand(); rand();

	

	char One_flor[1] = { 111 };
	


	char  map_user[WORLD_HEIGHT][WORLD_WIDTH] = { { 0,'A','B','C','D','E','F','G','H','I','J' },
	{'1',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'2',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'3',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'4',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'5',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'6',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'7',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'8',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'9',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'0',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

	char  map_comp[WORLD_HEIGHT][WORLD_WIDTH] = { { 0,'A','B','C','D','E','F','G','H','I','J' },
	{'1',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'2',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'3',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'4',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'5',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'6',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'7',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'8',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'9',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{'0',  0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

	//Генерируем случайную расстановку однопалубных кораблей компьютеру

	int One_x = 0;
	int One_y = 0;
	int Two_x = 0;
	int Two_y = 0;
	int Two_x1 = 0;
	int Two_y1 = 0;

	One_k(One_x, One_y, map_comp, One_flor);	
	One_k(One_x, One_y, map_comp, One_flor); 	
	One_k(One_x, One_y, map_comp, One_flor); 	
	One_k(One_x, One_y, map_comp, One_flor); 
	Two_k(Two_x, Two_y, map_comp, One_flor); 
	Two_k(Two_x, Two_y, map_comp, One_flor); 
	Two_k(Two_x, Two_y, map_comp, One_flor); 
	Three_k(Two_x, Two_y, map_comp, One_flor);
	Three_k(Two_x, Two_y, map_comp, One_flor);

	//Генерируем случайную расстановку однопалубных кораблей пользователю
	One_k(One_x, One_y, map_user, One_flor);	system("cls");
	One_k(One_x, One_y, map_user, One_flor); system("cls");
	One_k(One_x, One_y, map_user, One_flor); system("cls");
	One_k(One_x, One_y, map_user, One_flor); system("cls");
	Two_k(Two_x, Two_y,  map_user, One_flor); system("cls");
	Two_k(Two_x, Two_y,  map_user, One_flor); system("cls");
	Two_k(Two_x, Two_y,  map_user, One_flor); system("cls");
	Three_k(Two_x, Two_y, map_user, One_flor);
	Three_k(Two_x, Two_y, map_user, One_flor);

	std::cout << "Поле компьютера:\n";
	vivod(map_comp);
	std::cout << "Поле игрока:\n";
	vivod(map_user);
	
	system("pause");
	return (0);

}

void One_k(int& One_x, int& One_y, char  map_user[11][11], char  One_flor[1])
{
	
	One_x = (rand() * 10 / RAND_MAX) + 1;
	One_y = (rand() * 10 / RAND_MAX) + 1;
	
	for (int i = 0; i < WORLD_HEIGHT; i++)
	{

		for (int j = 0; j < WORLD_WIDTH; j++)
		{
			if (i == One_x && j == One_y)
			{
				if (map_user[i][j] == '111' || map_user[i + 1][j] == '111' ||
					map_user[i][j + 1] == '111' || map_user[i - 1][j] == '111' ||
					map_user[i][j - 1] == '111' || map_user[i + 1][j + 1] == '111' ||
					map_user[i - 1][j - 1] == '111' || map_user[i - 1][j + 1] == '111' ||
					map_user[i + 1][j - 1] == '111')
				{
					One_k(One_x, One_y, map_user, One_flor);
				}else
				map_user[i][j] = One_flor[0]; break;

			

			}
			
		}
	}
}


void Two_k(int& Two_x, int& Two_y, char  map_user[11][11], char  One_flor[1])
{

	Two_x = (rand() * 10 / RAND_MAX) + 1;
	Two_y = (rand() * 10 / RAND_MAX) + 1;




	for (int i = 0; i < WORLD_HEIGHT; i++)
	{

		for (int j = 0; j < WORLD_WIDTH; j++)
		{
			if (i == Two_x && j == Two_y)
			{
				if ((map_user[i][j] == '111' || map_user[i + 1][j] == '111' ||
					map_user[i][j + 1] == '111' || map_user[i - 1][j] == '111' ||
					map_user[i][j - 1] == '111' || map_user[i + 1][j + 1] == '111' ||
					map_user[i - 1][j - 1] == '111' || map_user[i - 1][j + 1] == '111' ||
					map_user[i + 1][j - 1] == '111') && (i < 10 && (map_user[i + 2][j - 1] == '111' || map_user[i + 2][j] == '111' ||
						map_user[i + 2][j + 1] == '111')))
				{
					Two_k(Two_x, Two_y, map_user, One_flor);
				}
				else

							map_user[i][j] = One_flor[0];
								map_user[i + 1][j] = One_flor[0]; break;
										

				if ((i > 1 && (map_user[i - 2][j - 1] == '111' || map_user[i - 2][j] == '111' ||
					map_user[i - 2][j + 1] == '111')) && (map_user[i][j] == '111' || map_user[i + 1][j] == '111' ||
						map_user[i][j + 1] == '111' || map_user[i - 1][j] == '111' ||
						map_user[i][j - 1] == '111' || map_user[i + 1][j + 1] == '111' ||
						map_user[i - 1][j - 1] == '111' || map_user[i - 1][j + 1] == '111' ||
						map_user[i + 1][j - 1] == '111'))
				{
					Two_k(Two_x, Two_y, map_user, One_flor);
					
				}else
				map_user[i][j] = One_flor[0];
				map_user[i - 1][j] = One_flor[0]; break;
				
				
				if ((j > 1 && (map_user[i + 1][j - 2] == '111' || map_user[i][j - 2] == '111' ||
					map_user[i + 1][j - 2] == '111')) && (map_user[i][j] == '111' || map_user[i + 1][j] == '111' ||
						map_user[i][j + 1] == '111' || map_user[i - 1][j] == '111' ||
						map_user[i][j - 1] == '111' || map_user[i + 1][j + 1] == '111' ||
						map_user[i - 1][j - 1] == '111' || map_user[i - 1][j + 1] == '111' ||
						map_user[i + 1][j - 1] == '111'))
				{
					Two_k(Two_x, Two_y, map_user, One_flor);
					
				}
				else
				map_user[i][j] = One_flor[0];
				map_user[i][j - 1] = One_flor[0]; break;

				if ((j < 10 && (map_user[i + 1][j + 2] == '111' || map_user[i][j + 2] == '111' ||
					map_user[i - 1][j + 2] == '111')) && (map_user[i][j] == '111' || map_user[i + 1][j] == '111' ||
						map_user[i][j + 1] == '111' || map_user[i - 1][j] == '111' ||
						map_user[i][j - 1] == '111' || map_user[i + 1][j + 1] == '111' ||
						map_user[i - 1][j - 1] == '111' || map_user[i - 1][j + 1] == '111' ||
						map_user[i + 1][j - 1] == '111'))
				{
					Two_k(Two_x, Two_y, map_user, One_flor);
					
				}
				else
				map_user[i][j] = One_flor[0];
				map_user[i][j + 1] = One_flor[0]; break;

			}

		}

	}

}

		
	


void Three_k(int& Two_x, int& Two_y, char  map_user[11][11], char  One_flor[1])
{

	Two_x = (rand() * 10 / RAND_MAX) + 1;
	Two_y = (rand() * 10 / RAND_MAX) + 1;




	for (int i = 0; i < WORLD_HEIGHT; i++)
	{

		for (int j = 0; j < WORLD_WIDTH; j++)
		{
			if (i == Two_x && j == Two_y)
			{
				if (map_user[i][j] == '111' || map_user[i + 1][j] == '111' ||
					map_user[i][j + 1] == '111' || map_user[i - 1][j] == '111' ||
					map_user[i][j - 1] == '111' || map_user[i + 1][j + 1] == '111' ||
					map_user[i - 1][j - 1] == '111' || map_user[i - 1][j + 1] == '111' ||
					map_user[i + 1][j - 1] == '111')
				{
					Three_k(Two_x, Two_y, map_user, One_flor);
				}
				else
					map_user[i][j] = One_flor[0];
				if (i < 9 && (map_user[i + 2][j - 1] == '111' || map_user[i + 2][j] == '111' ||
					map_user[i + 2][j + 1] == '111' || map_user[i + 3][j - 1] == '111' || map_user[i + 3][j] == '111' ||
					map_user[i + 3][j + 1] == '111'))
				{
					if (i > 2 && (map_user[i - 2][j - 1] == '111' || map_user[i - 2][j] == '111' ||
						map_user[i - 2][j + 1] == '111' || map_user[i - 3][j - 1] == '111' || map_user[i - 3][j] == '111' ||
						map_user[i - 3][j + 1] == '111'))
					{
						if (j > 2 && (map_user[i + 1][j - 2] == '111' || map_user[i][j - 2] == '111' ||
							map_user[i + 1][j - 2] == '111' || map_user[i][j - 3] == '111' || map_user[i + 1][j - 3] == '111' ||
							map_user[i - 1][j - 3] == '111'))
						{
							if (j < 9 && (map_user[i + 1][j + 2] == '111' || map_user[i][j + 2] == '111' ||
								map_user[i - 1][j + 2] == '111' || map_user[i + 1][j + 3] == '111' || map_user[i][j + 3] == '111' ||
								map_user[i - 1][j + 3] == '111'))
							{
								map_user[i][j] = 0;
								Three_k(Two_x, Two_y, map_user, One_flor);
							}
							else

								map_user[i][j + 1] = One_flor[0];
							map_user[i][j + 2] = One_flor[0];
						}
						else
							map_user[i][j - 1] = One_flor[0];
						map_user[i][j - 2] = One_flor[0];
					}
					else
						map_user[i - 1][j] = One_flor[0];
					map_user[i - 2][j] = One_flor[0];
				}
				else
					map_user[i + 1][j] = One_flor[0];
				map_user[i + 2][j] = One_flor[0];

					
				
			}

		}
	}
}

void vivod( char map[WORLD_HEIGHT][WORLD_WIDTH])
{
	
		for (int i = 0; i < WORLD_HEIGHT; i++)
	{

		for (int j = 0; j < WORLD_WIDTH; j++)
		{
			std::wcout << map[i][j] << "|";
		}std::wcout << "\n";

	}
}
	
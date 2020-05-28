#pragma once

#include <string.h>
#include <string>
#include < Windows.h >

struct Deti;
extern int menu = 0;
extern int uchenik = 6;	
extern Deti* d = new Deti[uchenik];
//Deti* d = new Deti[uchenik]; // Глобальные переменные для выбора ввода

void Menu();
void Show(const Deti a[], int n);
void Show_Biologia(const Deti a[], int n);
void Show_Matem(const Deti a[], int n);
void Show_Fizika(const Deti a[], int n);
void Dostup(const Deti a[], int n);
void Ocenki_uchenika(const Deti a[], int n, std::string f);
void Ocenki_uchenika_smena(Deti a[], int n, std::string f);
void Dobavit_uchenik(Deti a[], int n);
void Udalenie_uchenika(Deti a[], int n, std::string f);

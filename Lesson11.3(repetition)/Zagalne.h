#pragma once
#include<iostream>
#include<stdlib.h>
#include<time.h>
#define Vvod(a) std::cin>>a;
#define Show(a) std::cout<<a;
#define Default std::cout<<"Ne virno zroblenui vubir!"; 

void Random();
void Random_Masuv(int Ar[], int N);
void Show_Masuv(int Ar[], int N);
void Random_Matruca(int Ar[][7], int row, int col);
void Show_Matruca(int Ar[][7], int row, int col);

﻿/*1. Легенда розповідає, що десь у Ханої є храм, у якому розташована така конструкція: 
на основі укріплені 3 алмазні стрижні, на які при створенні світу 
Брахма нанизав 64 золотих диска з отвором посередині, 
причому внизу виявився найбільший диск, на ньому — трохи менший і так далі, 
поки на верхівці піраміди не виявився найменший диск. 
Жерці храму зобов'язані перекладати диски за такими правилами:
■ За один хід можна перенести тільки один диск.
■ Не можна класти більший диск на менший.
Керуючись цими нехитрими правилами, жерці мають перенести вихідну піраміду 
з 1-го стрижня на 3-й. Щойно вони впораються з цим завданням, настане кінець світу.
Ми пропонуємо вам як домашнє завдання розв'язати цю задачу за допомогою рекурсії.*/

#pragma once
#include<iostream>
#include "Zagalne.h"

void Legenda();
void StruzenA(int Ar[], int N);
void StruzenB();
void StruzenC();
void Perestanovka(char A, char B, char C, int Ar1[], int Ar2[], int Ar3[], int N);
void Vudalenna(int Ar[], int N, int n);
void Vstavka(int Ar[], int N, int n);
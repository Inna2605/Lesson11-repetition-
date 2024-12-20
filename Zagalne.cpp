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
Ми пропонуємо вам як домашнє завдання розв'язати цю задачу за допомогою рекурсії.
2. Написати рекурсивну функцію знаходження ступеня числа.
3. Написати рекурсивну функцію, яка виводить N зірок у ряд, число N задає користувач.
Проілюструйте роботу функції прикладом.
4. Написати рекурсивну функцію, яка обчислює суму всіх чисел у діапазоні від a до b.
Користувач вводить a і b. Проілюструйте роботу функції прикладом.
5. Напишіть рекурсивну функцію, яка приймає одновимірний масив зі 100 цілих чисел,
заповнених випадковим чином, і знаходить позицію, з якої починається
послідовність з 10 чисел, сума яких мінімальна.*/
#include<iostream>
#include "Zagalne.h"
#include "Zadacha1.h"
#include "Zadacha2.h"
#include "Zadacha3.h"
#include "Zadacha4.h"
#include "Zadacha5.h"
using namespace std;

void Vubir_zadachi()
{
	cout << "Oberite zadachy\n"
		<< "1. Legenda\n"
		<< "2. Stypen chisla\n"
		<< "3. Zirochku\n"
		<< "4. Syma chusel v diapazoni\n"
		<< "5. Dii z masuvom\n"
		<< "6. Vuhid\n";
}

void Swich(int N)
{
	switch (N) {
	case 1:Legenda(); break;
	case 2:Znahodzenna_stypeni_chisla<int, int>(); break;
	case 3:Zirochku(); break;
	case 4:Suma_v_diapazoni(); break;
	case 5:Dii_z_masuvom(); break;
	case 6:break;
	default:Default;
	}
}

void Show_masuv(int Ar[], int N)
{
	for (int i = 0; i < N; i++) {
		Show(Ar[i]);
		Show(' ');
	}
	Show('\n');
}
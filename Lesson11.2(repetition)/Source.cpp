﻿/*1. Написати функцію, що реалізує алгоритм лінійного пошуку заданого ключа в одновимірному масиві.
2. Написати функцію, що реалізує алгоритм бінарного пошуку заданого ключа в одновимірному масиві.
3. Написати перевантажені функції (int, double, char) для виконання таких завдань:
■ Ініціалізація квадратної матриці;
■ Вивід матриці на екран;
■ Визначення максимального й мінімального елемента на головній діагоналі матриці;
■ Сортування елементів за зростанням окремо для кожного рядка матриці.
4. Написати рекурсивну функцію знаходження найбільшого спільного дільника двох цілих чисел.
5. Написати гру «Бики та корови». Програма «загадує» чотиризначне число і гравець має вгадати його.
Після введення користувачем числа програма повідомляє, скільки цифр числа вгадано (бики) і
скільки цифр вгадано і стоїть на потрібному місці (корови).
Після відгадування числа на екран необхідно вивести кількість зроблених користувачем спроб.
У програмі необхідно використовувати рекурсію.*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

#include "Zagalne.h"
#include "Zadacha1.h"
#include "Zadacha2.h"
#include "Zadacha3.h"
#include "Zadacha4.h"
#include "Zadacha5.h"

using namespace std;

int main() {
	int a = 0;
	while (a != 6) {
		Vubir_zadachi();
		Vvod(a);
		Switch_zadach(a);
		Show('\n');
	}
}
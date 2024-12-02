/*c) Напишіть рекурсивну функцію, яка приймає двовимірний масив цілих чисел і 
кількість зрушень і виконує круговий зсув масиву вниз.
Наприклад:
Дан масив:
4 5 6 7
1 2 4 1
4 3 6 8
Зрушуємо вниз на один:
4 3 6 8
4 5 6 7
1 2 4 1*/

#pragma once
#include "Zadacha2.h"

void Zsyv_Vnuz(int c, int i, int Ar[][7], int row, int col) {

	for (int j = 0; j < col; j++) {
		Show(Ar[i][j]);
		Show(' ');
	}
	i++;
	if (i == row) {
		i = 0;
	}
	if (i == row - c)return;;
	Show('\n');
	Zsyv_Vnuz(c, i, Ar, row, col);
	Show('\n');
}
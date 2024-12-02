/*a) Напишіть рекурсивну функцію, яка приймає двовимірний масив цілих чисел і 
кількість зрушень і виконує круговий зсув масиву вправо.
Наприклад:
Дан масив:
4 5 6 7
1 2 4 1
4 5 6 9
Зрушуємо на три вправо:
5 6 7 4
2 4 1 1
5 6 9 4*/
#pragma once
#include "Zadacha2.h"

void Zsyv_Vpravo(int c, int i, int Ar[][7], int row, int col) {

	if (i == row)return;
	for (int j = col - c; j < col; j++) {
		Show(Ar[i][j]);
		Show(' ');
	}
	for (int k = 0; k < col - c; k++) {
		Show(Ar[i][k]);
		Show(' ');
	}
	Show('\n');
	Zsyv_Vpravo(c, i + 1, Ar, row, col);
}
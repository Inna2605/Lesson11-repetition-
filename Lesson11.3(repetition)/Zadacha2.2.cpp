/*b+) +апишіть рекурсивну функцію, яка приймає двовимірний масив цілих чисел і 
кількість зрушень і виконує круговий зсув масиву вліво.
Наприклад
Дан масив:
4 5 6 7
1 2 4 1
4 5 6 9
Зрушуємо на два вліво:
6 7 4 5
4 1 1 2
6 9 4 5*/
#pragma once
#include "Zadacha2.h"

void Zsyv_Vlivo(int c, int i, int Ar[][7], int row, int col) {

	if (i == row)return;
	for (int j = c; j < col; j++) {
		Show(Ar[i][j]);
		Show(' ');
	}
	for (int k = 0; k < c; k++) {
		Show(Ar[i][k]);
		Show(' ');
	}
	Show('\n');\
		Show('\n');
}
/*2.
a) Напишіть рекурсивну функцію, яка приймає двовимірний масив цілих чисел і 
кількість зрушень і виконує круговий зсув масиву вправо.
Наприклад:
Дан масив:
4 5 6 7
1 2 4 1
4 5 6 9
Зрушуємо на три вправо:
5 6 7 4
2 4 1 1
5 6 9 4

b) Напишіть рекурсивну функцію, яка приймає двовимірний масив цілих чисел і 
кількість зрушень і виконує круговий зсув масиву вліво.
Наприклад
Дан масив:
4 5 6 7
1 2 4 1
4 5 6 9
Зрушуємо на два вліво:
6 7 4 5
4 1 1 2
6 9 4 5

c) Напишіть рекурсивну функцію, яка приймає двовимірний масив цілих чисел і 
кількість зрушень і виконує круговий зсув масиву вниз.
Наприклад:
Дан масив:
4 5 6 7
1 2 4 1
4 3 6 8
Зрушуємо вниз на один:
4 3 6 8
4 5 6 7
1 2 4 1
*/
#include "Zadacha2.h"

void Vubir_pynkty();
void Switch_pynkty(int b, int c, int i, int Ar[][7], int row, int col);
void Vpravo(int c, int i, int Ar[][7], int row, int col);
void Vlivo(int c, int i, int Ar[][7], int row, int col);
void Vnuz(int c, int i, int Ar[][7], int row, int col);

void Zsuv_masuvy()
{
	const int row = 5, col = 7;
	int Ar[row][col];
	int b = 0, c = 0, i = 0;
	Random_Matruca(Ar, row, col);
	Show_Matruca(Ar, row, col);
	Show('\n');
	while (true) {
		Vubir_pynkty();
		Vvod(b);
		if (b == 4)break;
		Show('\n');
		Switch_pynkty(b, c, i, Ar, row, col);
	}
}

void Vubir_pynkty()
{
	std::cout << "Oberite napram zsuvy:\n"
		<< "1. Vpravo\n"
		<< "2. Vlivo\n"
		<< "3. Vnuz\n"
		<< "4. Vuhid\n";
}

void Switch_pynkty(int b, int c, int i, int Ar[][7], int row, int col)
{
	switch (b) {
	case 1: Vpravo(c, i, Ar, row, col); break;
	case 2: Vlivo(c, i, Ar, row, col); break;
	case 3: Vnuz(c, i, Ar, row, col); break;
	case 4:break;
	default:Default;
	}
}

void Vpravo(int c, int i, int Ar[][7], int row, int col)
{
	c = Zsuv(col);
	Zsyv_Vpravo(c, i, Ar, row, col);
	Show('\n');
}

void Vlivo(int c, int i, int Ar[][7], int row, int col)
{
	c = Zsuv(col);
	Zsyv_Vlivo(c, i, Ar, row, col);
	Show('\n');
}

void Vnuz(int c, int i, int Ar[][7], int row, int col)
{
	c = Zsuv(col);
	i = row - c;
	Zsyv_Vnuz(c, i, Ar, row, col);
	Show('\n');
}

int Zsuv(int N)
{
	int c;
	std::cout << "Vvedite na skilku mae bytu zsyv: ";
	Vvod(c);
	if (c > N) {
		while (c >= N) {
			c = c - N;
		}
	}
	std::cout << "Zminenui masuv:\n";
	return c;
}

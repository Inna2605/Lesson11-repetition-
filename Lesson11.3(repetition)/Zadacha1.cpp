/*1. Дан одновимірний масив цілих чисел. Напишіть рекурсивну функцію, яка здійснює знаходження
шуканого значення за допомогою бінарного пошуку. Функція повертає позицію входження шуканого значення.
Проілюструйте роботу функції прикладом.*/
#include "Zadacha1.h"

void Svudke_sortuvanna(int Ar[], int N);
int Poshuk_rekursia(int Ar[], int N, int l, int p, int a);

void Binarnui_poshuk()
{
	const int N = 20;
	int Ar[N];
	int a = 0, l = 0, p = N - 1, R;
	Random_Masuv(Ar, N);
	Show_Masuv(Ar, N);
	Show('\n');
	std::cout << "Vporadkovanui masuv:\n";
	Svudke_sortuvanna(Ar, N);
	Show_Masuv(Ar, N);
	Show('\n');
	std::cout << "Vvedite znachenna: ";
	Vvod(a);
	Show('\n');
	R = Poshuk_rekursia(Ar, N, l, p, a);
	std::cout << "Element ";
	Show(a);
	if (R != -1) {
		std::cout << " v masuvi na pozucii ";
		Show(R + 1);
	}
	else std::cout << " v masuvi ne znaidenui";
	Show('\n');
}

void Svudke_sortuvanna(int Ar[], int N)
{
	int i = 0, j = N-1, S = Ar[N / 2], n;
	do {
		while (Ar[i] < S)i++;
		while (Ar[j] > S)j--;
		if (i <= j) {
			n = Ar[i];
			Ar[i] = Ar[j];
			Ar[j] = n;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0)Svudke_sortuvanna(Ar, j);
	if (N > i)Svudke_sortuvanna(Ar + i, N - i);
}

int Poshuk_rekursia(int Ar[], int N, int l, int p, int a)
{
		int M = (l + p) / 2;
		if (a < Ar[M]) {
			return Poshuk_rekursia(Ar, N, l, p-1, a);
		}
		else if (a > Ar[M]) {
			return Poshuk_rekursia(Ar, N, l + 1, p, a);
		}
		else return M;
	if (l > p)return -1;
}

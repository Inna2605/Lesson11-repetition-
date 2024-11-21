/*5. Напишіть рекурсивну функцію, яка приймає одновимірний масив зі 100 цілих чисел, 
заповнених випадковим чином, і знаходить позицію, з якої починається 
послідовність з 10 чисел, сума яких мінімальна.*/
#include "Zadacha5.h"
using namespace std;

void Dii_z_masuvom()
{
	const int Num = 100;
	int Ar[Num];
	Randomnui_masuv(Ar, Num);
	Show_masuv(Ar, Num);
	Show('\n');
	Znahodzenna_pozucii(Ar, Num);
}

void Random()
{
	srand(time(NULL));
}

void Randomnui_masuv(int Ar[], int N)
{
	Random();
	for (int i = 0; i < N; i++) {
		Ar[i] = rand() % 100 - 50;
	}
}

void Znahodzenna_pozucii(int Ar[], int N)
{
	const int n = 10;
	int Sum[n];
	int j = 0, min, k, c = 0, s;
	for (int i = 0; i < 10; i++) {
		c = n + j;
		s = 0;
		while(j < c) {
			s += Ar[j];
			j++;
		}
	Sum[i] = s;
	}
	min = Sum[0];
	for (int j = 0; j < n; j++) {
		if (min > Sum[j]) {
			min = Sum[j];
			if (j != 0) {
				k = j * n;
			}
			else k == j;
		}
	}
	cout << "\nMinimalna syma ";
	Show(min);
	cout << " iz desatkiv chisel masuva "
		<< "pochinaetsa z chisla ";
	Show(Ar[k]);
	cout << " v pozusii ";
	Show(k + 1);
	Show('\n');
}

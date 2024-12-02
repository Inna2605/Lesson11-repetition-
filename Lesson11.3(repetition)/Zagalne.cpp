#include "Zagalne.h"

void Random()
{
	srand(time(NULL));
}

void Random_Masuv(int Ar[], int N)
{
	if (N == 0)return;
	Ar[N - 1] = rand() % 50 - 25;

	Random_Masuv(Ar, N - 1);
}

void Show_Masuv(int Ar[], int N)
{
	for (int i = 0; i < N; i++) {
		Show(Ar[i]);
		Show(' ');
	}
	Show('\n');
}

void Random_Matruca(int Ar[][7], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			Ar[i][j] = rand() % 50 - 25;
		}
	}
}

void Show_Matruca(int Ar[][7], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			Show(Ar[i][j]);
			Show(' ');
		}
		Show('\n');
	}
	Show('\n');
}


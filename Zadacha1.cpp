/*1. Легенда розповідає, що десь у Ханої є храм, у якому розташована така конструкція: 
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
#include "Zadacha1.h"
using namespace std;

void Legenda()
{
	const int N = 3;
	int A[N];
	cout << "Gtrsui struzen:\n";
	StruzenA(A, N);
	int B[N] = {0};
	int C[N] = {0};
	char a = 'A', b = 'B', c = 'C';
	Perestanovka(a, c, b, A, B, C, N);
}

void StruzenA(int Ar[], int N)
{
	int i = N, a = 0;
	while (i > 0) {
		Ar[a] = i;
		i--;
		a++;
	}
	Show_masuv(Ar, N);
}


void Perestanovka(char A, char C, char B, int Ar1[], int Ar2[], int Ar3[], int N)
{
	if (N == 0)return;

	Perestanovka(A, B, C, Ar1, Ar2, Ar3, N - 1);

	if (A == 'A') {
		Vudalenna(Ar1, 3, N);
	}
	if (A == 'B') {
		Vudalenna(Ar2, 3, N);
	}
	if (A == 'C') {
		Vudalenna(Ar3, 3, N);
	}

	if (C == 'A') {
		Vstavka(Ar1, 3, N);
	}
	if (C == 'B') {
		Vstavka(Ar2, 3, N);
	}
	if (C == 'C') {
		Vstavka(Ar3, 3, N);
	}
	cout << "Dusk " << N << " perekladenui z struzna " << A << " na struzen " << C << endl;
	Show('\n');
	cout << "A: ";
	Show_masuv(Ar1, 3);
	Show('\n');
	cout << "B: ";
	Show_masuv(Ar2, 3);
	Show('\n');
	cout << "C: ";
	Show_masuv(Ar3, 3);
	Show('\n');
	Perestanovka(B, C, A, Ar1, Ar2, Ar3, N - 1);
}

void Vstavka(int Ar[], int N, int n)
{
	for (int i = 0; i < N; i++) {
		if (Ar[i] == 0) {
			Ar[i] = n;
		break;
		}
	}
}

void Vudalenna(int Ar[], int N, int n)
{
	for (int i = 0; i < N; i++) {
		if (Ar[i] == n) {
			Ar[i] = 0;
		}
	}
}

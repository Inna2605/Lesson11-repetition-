/*4. Написати рекурсивну функцію, яка обчислює суму всіх чисел у діапазоні від a до b. 
Користувач вводить a і b. Проілюструйте роботу функції прикладом.*/
#include<iostream>
#include "Zadacha4.h"
using namespace std;

void Suma_v_diapazoni()
{
	int a, b;
	cout << "Vvedite dva chisl kordoniv diapazony: ";
	Vvod(a);
	Vvod(b);
	if (b < a) {
		int x = a;
		a = b;
		b = x;
	}
	int Sum = Suma(a, b);
	cout << "Suma vsux chusel v diapazoni vid ";
	Show(a);
	cout << " do ";
	Show(b);
	cout << " dorivnye: ";
	Show(Sum);
	Show('\n');
}

int Suma(int N1, int N2)
{
	if (N1 == N2) return N1;
	if(N1 < N2) return N1 + Suma(N1 + 1, N2);
}
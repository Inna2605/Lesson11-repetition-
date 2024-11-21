/*3. Написати рекурсивну функцію, яка виводить N зірок у ряд, число N задає користувач.
Проілюструйте роботу функції прикладом.*/
#include<iostream>
#include "Zadacha3.h"
using namespace std;

void Zirochku()
{
	int n;
	cout << "Vvedite skilku mae bytu zirochok: ";
	Vvod(n);
	Vuvod_zirochok(n);
	Show('\n');
}

void Vuvod_zirochok(int N)
{
	if (N <= 0)return;
	else {
		Show('*');
		Show(' ');
		Vuvod_zirochok(N - 1);
	}
}

//2. Написати рекурсивну функцію знаходження ступеня числа.
#include<iostream>
#pragma once
#include "Zagalne.h"

template<typename T1, typename T2> T1 Rekyrsia(T1 N1, T2 N2)
{
	if (N2 == 0)return 1;
	if (N2 >= 1)return N1 * Rekyrsia(N1, N2-1);
}
template<typename T1, typename T2> void Znahodzenna_stypeni_chisla()
{
	T1 Num, R;
	T2 St;
	std::cout << "Vvedite chislo ta stypin: ";
	Vvod(Num);
	Vvod(St);
	R = Rekyrsia(Num, St);
	std::cout << "Chuslo ";
	Show(Num);
	std::cout << " v stepini ";
	Show(St);
	std::cout << " byde ";
	Show(R);
	Show('\n');
}

/*5. Напишіть рекурсивну функцію, яка приймає одновимірний масив зі 100 цілих чисел, 
заповнених випадковим чином, і знаходить позицію, з якої починається 
послідовність з 10 чисел, сума яких мінімальна.*/
#pragma once
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "Zagalne.h"

void Dii_z_masuvom();
void Random();
void Randomnui_masuv(int Ar[], int N);
void Znahodzenna_pozucii(int Ar[], int N);
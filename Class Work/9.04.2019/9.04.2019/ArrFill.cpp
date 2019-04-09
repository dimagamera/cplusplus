#include "arrs.h"
#include <ctime>
#include <iostream>

void Fill(int *&arr, int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand()%10;
	}
}



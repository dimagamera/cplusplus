#include "arrs.h"
#include <iostream>

using namespace std;
void Print(int *&arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
	}
}

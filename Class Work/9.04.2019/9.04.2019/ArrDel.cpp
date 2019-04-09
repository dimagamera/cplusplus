#include "arrs.h"
#include <iostream>

using namespace std;

int* dell(int *&arr, int &size)
{
	size--;
	int index;
	cout << " Del element Element = " << endl;
	cin >> index;
	int *newarr = new int[size];
	for (int i = 0; i <= index; i++) {
		newarr[i] = arr[i];
	}
	delete[] arr;
	return newarr;
}

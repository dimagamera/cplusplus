#include "arrs.h"
#include <iostream>

using namespace std;

int* dell(int *&arr, int &size)
{
	
	int index;
	cout << "Index = ";
	cin >> index;
	int *newarr = new int[size - 1];
	for (int i = 0; i <= size; i++) {
		if (i != index) {
			newarr[i] = arr[i];
		}
	}
	for (int i = 0; i < size; i++) {
		cout << newarr[i] << " ";
		cout << endl;
	}

	free(arr);
	return newarr;
}

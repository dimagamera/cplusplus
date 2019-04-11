#include "arrs.h"
#include <iostream>

using namespace std;

int* add2(int *&arr, int &size)
{
	int index;
	int pos;
	cout << "Add New Element = ";
	cin >> index;
	cout << "Pos = ";
	cin >> pos;
	int* newarr = nullptr;
	newarr = (int *)calloc(size++, sizeof(int));
	for (int i = 0; i <= pos; i++) {
		newarr[i] = arr[i];
		newarr[pos] = index;
	}
	for (int i = pos + 1; i < size + 1; i++) {
		newarr[i] = arr[i];
	}

	for (int i = 0; i < size + 1; i++) {
		cout << newarr[i] << " ";
		cout << endl;
	}

	free(arr);
	system("pause");
	return newarr;

}

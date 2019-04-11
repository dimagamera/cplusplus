#include "arrs.h"
#include <ctime>
#include <iostream>

using namespace std;
void add(int *&arr, int size) {
	int elem = 0;
	cout << "Enter new element " << endl;
	cin >> elem;
	int* tmpArr = nullptr;
	tmpArr = (int *)calloc(size++, sizeof(int));
	
	for (int i = 0; i < size; i++) {
		tmpArr[i] = arr[i];
	}
	tmpArr[size] = elem;
	free(arr);
	arr = tmpArr;
	for (int i = 0; i < size + 1; i++) {
		cout << "arr [ " << i << " ]=" << arr[i] << "\t\t";
	}

}
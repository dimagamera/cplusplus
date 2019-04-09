#include "arrs.h"
#include <ctime>
#include <iostream>

using namespace std;
	void add (int *&arr, int size) {
			int elem = 0;
			cout << "Enter new element " << endl;
			cin >> elem;
			int *tmpArr = new int[size + 1];

			for (int i = 0; i < size; i++) {
				tmpArr[i] = arr[i];
			}
			tmpArr[size] = elem;
			delete[]arr;
			arr = tmpArr;
			for (int i = 0; i < size + 1; i++) {
				cout << "arr [ " << i << " ]=" << arr[i] << "\t\t";
			}

}
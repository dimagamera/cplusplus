#include <iostream>
#include <ctime>
#include <string>
#include "arrs.h"

	using namespace std;


	int main() {
		srand(unsigned(time(NULL)));
		int size;
		cout << "Enter arr size : " << endl;
		cin >> size;
		int *arr = (int *)calloc(size, sizeof(int));
		
		int menu;
		for (;true;) {
			cout << endl << "1. Fill 2. Print 3. Add 4. Add by position 5. Del by position || == >   ";
			cin >> menu;
			if (menu == 1) {
				Fill(arr, size);
			}
			else if (menu == 2) {
				Print(arr, size);
			}
			else if (menu == 3) {
				add(arr, size);
			}
			else if (menu == 4) {
				add2(arr, size);

			}
			else if (menu == 5) {
				arr = dell(arr, size);
			}

		}
		free(arr);
		system("pause");
		return 0;
	}

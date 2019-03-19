#include <iostream>
#include <ctime>
//Написати функції для роботи з динамічним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
//Виводу масиву
//Доповнення масиву одним елементом в кінець масиву.
//Доповнення масиву одним елементом в початокмасиву.
//Видалення елемента за вказаною позицією.
//Вставка нового елемента у довільну допустиму позицію у масиві
//Меню
using namespace std;
void Fill(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void Print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
	}
}
void Push(int *&arr, int size) {
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
	void Push2(int *&arr, int size) {
		int elem = 0;
		cout << "Enter new element " << endl;
		cin >> elem;
		int *tmpArr = new int[1 + size];
		for (int i = 0; i < size; i++) {
			tmpArr[i] = arr[i];
		}
		tmpArr[size] = elem;
		arr = tmpArr;
		for (int i = size; i >= 0; i--) {
			cout << "arr [ " << i << " ]=" << arr[i] << "\t\t";
		}
	}
void del(int *&arr, int size) {
	cout << endl;
	int mas = 0; int s = 0;
	cout << "Enter delete mas = ";
	cin >> mas;
	cout << "enter new symvol = ";
	cin >> s;
	arr[mas] = s;
	for (int i = 0; i < size + 1; i++) {
		cout << "arr [ " << i << " ]=" << arr[i] << "\t\t";
	}
	}

int main() {
	srand(unsigned(time(NULL)));
	int size;
	cout << "Enter arr size : " << endl;
	cin >> size;
	int *arr = new int[size];

	Fill(arr, size);
	Print(arr, size);
	Push(arr, size);
	Push2(arr, size);
	del(arr, size);
	
	//Mass2(arr, size);
	delete[] arr;

	system("pause");
	return 0;
}

//1) Написати функції для роботи з динамічним одновимірним масивом :
//a) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні[-12..56].Функція повертає адресу створеного масиву.
//b) Виводу масиву
//c) Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
//
//* Для тих зто все зробив на парі
//
//*) Написати функцію, яка отримує матрицю дробових чисел і повертає ссилку(посилання) на елемент матриці, найближчий до середнього арифметичного матриці.
//За допомогою функції :
//a) Вивести елемент, найближчий до середнього
//b) Змінити знак елемента, найближчий до середнього, на протилежний

#include <iostream>

using namespace std;

void Print(int *&arr, int size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 56 + (-12);
	}
}
void Fill(int *&arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [ " << i << " ]=" << arr[i] << "\t\t";
	}
}
void Push(int *&arr, int size) {
	int elem = 0;
	cout << endl << "Enter new element " << endl;
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
	cout << endl;
}
int main() {
	int size;
	cout << "Enter size mas: " << endl;
	cin >> size;
	int *arr = new int[size];
	Print(arr, size);
	Fill(arr, size);
	Push(arr, size);

	system("pause");
	return 0;
}
//Написати 2 логічні функції : bigger(int, int) – повертає true, якщо перше число більше другого, інакше повертає false; 
//функція smaller(int, int) – навпаки, повертає true, якщо перше менше другого.Написати функцію sort_arr(int *array, int size, 
//	bool(*f)(int, int)) для впорядкування масиву.Функція отримує масив та вказівник на логічну функцію, яка буде задавати порядок сортування.
//	Так, наприклад, при передачі у функцію sort_arr() третім аргументом адреси функції bigger, 
//масив впорядкується по зростанню, а при передачі адреси функції smaller, масив впорядкується по спаданню.


//#include <iostream>
//#include <ctime>
//#include <string>
//
//using namespace std;
//
//void Fill(int *arr, const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 10;
//	}
//}
//
//void Print(int *arr, const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		cout << "Arr [" << i << "] = " << arr[i] << endl;
//	}
//}
//
//bool Bigger(int a, int b) {
//	if (a > b) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//bool Smaller(int a, int b) {
//	if (a > b) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//void SortArr(int *arr, const int SIZE, bool(*f)(int a, int b)) {
//	int a = 110, b = 19;
//	if (f(a, b) == 1) {
//		cout << "Sort upper" << endl;
//	
//}
//	else {
//		cout << "Sort lower" << endl;
//	}
//}
//void sort_arr(int *arr, const int SIZE, bool(*f)(int a, int b)) {
//		for (int i = SIZE - 1; i >= 1; i--) {
//
//			for (int j = 0; j < i; j++) {
//				if (arr[j] > arr[j + 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//
//		}
//		for (int i = 0; i < SIZE; i++) {
//			cout << "i => " << arr[i] << endl;
//		}
//}
//
//int main() {
//
//	const int SIZE = 10;
//	int arr[SIZE];
//
//	Fill(arr, SIZE);
//	Print(arr, SIZE);
//	SortArr(arr, SIZE, Bigger);
//	SortArr(arr, SIZE, Smaller);
//	sort_arr(arr, SIZE, Bigger);
//
//	system("pause");
//	return 0;
//}
                                                                                                                                                                                       //Написати функції для роботи з динамічним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні[-12..56].
//Функція повертає адресу створеного масиву.
//Виводу масиву
//Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
//

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void Fill(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 56 + (-12);
	}
}
void Print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << " Arr  =" << i;
	}
	cout << "\nArr Address [" << &arr << "]" << endl;
} 
void Push(int arr[], int size) {
	int elem = 0;
	cout << "Enter elem => ";
	cin >> elem;
	int *tmparr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		tmparr[i] = arr[i];
	}
	tmparr[size] = elem;
	arr = tmparr;
	for (int i = 0; i < size + 1; i++) {
		cout << "Arr [" << i << " ] = " << arr[i] << endl;
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

	system("pause");
	return 0;
}

//Написати функції для роботи з динамічним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.Ф
//ункція повертає адресу створеного масиву.
//Виводу масиву
//Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
//Видалення елемента за вказаною позицією.
//Вставка нового елемента у довільну допустиму позицію у масиві
//Меню
# include <iostream>
# include <ctime>

using namespace std;

template<typename T, typename T2>
void Fill(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 ;
	}
}

template<typename T, typename T2>
void Print(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}

template<typename T, typename T2>
void newnumber(T arr[], T2 size) {
	int q = 0;
	cout << "size element = " << size - 1 ;
	cin >> q;
	arr[size - 1] = q;
}

template<typename T, typename T2>
void masiv(T arr[], T2 size) {
	int mass = 0;
	int q = 0;
	cout << "Enter delete = " << endl;
	cin >> mass;
	cout << "Enter new = " << endl;
	cin >> q;
	arr[mass] = q;
}

template<typename T, typename T2>
void print2(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}
int main() {
	srand(unsigned(time(NULL)));
	int size;
	int value = 0;
	int *a = 0;
	cout << "Enter arr size : " << endl;
	cin >> size;

	int *arr = new int[size];

	Fill(arr, size);
	Print(arr, size - 1);
	newnumber(arr, size);
	masiv(arr, size);
	print2(arr, size);
	delete[] arr;
	system("pause");
	return 0;
}
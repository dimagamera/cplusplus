﻿//C++
//Написати функції для роботи з динамічним одновимірним масивом :
//Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
//Виводу масиву
//Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.
//Видалення елемента за вказаною позицією.
//Вставка нового елемента у довільну допустиму позицію у масиві
//Меню
//
//розбити проект на файл основної програми(.cpp), файл реалізації функцій(.cpp) та заголовочний файл(.h))
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
	int *arr = new int[size];

	 Fill(arr, size);
	 Print(arr, size);
	 add(arr, size);
	 Print(arr, size);
	 arr=dell(arr, size);
	 Print(arr, size);
	 

	system("pause");
	return 0;
}
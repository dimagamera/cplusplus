#include <iostream>
#include <ctime>
using namespace std;


//******15.	Дано цілочисельний одновимірний масив.Заповнити його,
//вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників.
int main() {
	srand(time(NULL));
	const int SIZE = 5;
	int arr[SIZE]{};
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 35 + 4;
		cout << arr[i] << endl;

	}
	system("pause");	
	return 0;
		}

//1.  Используя указатели и оператор разыменования, определить наибольшее из двух чисел.-- -
	//int num1 = 0;
	//int num2 = 0;
	//cout << "Enter" << endl;
	//cin >> num1 >> num2;
	//int *pN1 = &num1;
	//int *pN2 = &num2;


	//if (*pN1 > *pN2) {
	//	cout  << endl << *pN1 << ">" << endl;
	//}
	//else if (*pN1 < *pN2) {
	//	cout << endl << *pN2 << " >" << endl;
	//}





	//3.  Написать примитивный калькулятор, пользуясь только указателями
	//int num1 = 0;
	//int num2 = 0;
	//int p = 0;

	//cin >> num1 >> num2;
	//int *pN1 = &num1;
	//int *pN2 = &num2;
	//cout << "1 = [+] | 2 = [-] | 3 = [*] |4 = [/] |" << endl;
	//cin >> p;
	//	if (p == 1) {
	//		cout << " = " << *pN1 + *pN2;
	//	}
	//	else if (p == 2) {
	//		cout << " = " << *pN1 - *pN2;
	//	}
	//	else if (p == 3) {
	//		cout << " = " << *pN1 * *pN2;
	//	}

	//	else if (p == 4) {
	//		cout << " = " << *pN1 / *pN2;
	//	}



	//2. Используя указатели и оператор разыменования, обменять местами значения двух переменных
	//int num1 = 0;
	//int num2 = 0;
	//int *P = 0;

	//cin >> num1 >> num2;
	//int *pN1 = &num1;
	//int *pN2 = &num2;

	//cout << "1 = " << *pN1  << endl<< "2 = " << *pN2 << endl<< endl;
	//int pTMP = *pN1;
	//*pN1 = *pN2;
	//*pN2 = pTMP;
	//cout << "1 = " << *pN1 << endl << "2 = " << *pN2 << endl << endl;



//4. 34.	Сгенерировать десять массивов из случайных чисел.Вывести их и сумму их элементов на экран.
	//	Найти среди них один с максимальной суммой элементов.Указать какой он по счету,
	//	повторно вывести этот массив и сумму его элементов.
	//	Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.

	//
//4. 34.	Сгенерировать десять массивов из случайных чисел.Вывести их и сумму их элементов на экран.
//Найти среди них один с максимальной суммой элементов.Указать какой он по счету, повторно вывести 
//этот массив и сумму его элементов.
//Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.
//const int SIZE = 10;
//int arr1[SIZE]{};
//int arr2[SIZE]{};
//int arr3[SIZE]{};
//int arr4[SIZE]{};
//int arr5[SIZE]{};
//int arr6[SIZE]{};
//int arr7[SIZE]{};
//int arr8[SIZE]{};
//int arr9[SIZE]{};
//int arr10[SIZE]{};
//void Fill() {
//	cout << endl << "NUMBER 1" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		arr1[i] = rand() % 35 + 4;
//		cout << arr1[i];
//		cout << "============" << endl;
//	}
//	cout << endl << "NUMBER 2" << endl;
//
//	for (int i = 0; i < SIZE; i++) {
//
//		arr2[i] = rand() % 35 + 4;
//		cout << arr2[i];
//		cout << "============" << endl;
//	}
//
//	cout << endl << "NUMBER 3" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		arr3[i] = rand() % 35 + 4;
//		cout << arr3[i];
//		cout << "============" << endl;
//
//	}
//	cout << endl << "NUMBER 4" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		arr4[i] = rand() % 35 + 4;
//		cout << arr4[i];
//		cout << "============" << endl;
//
//	}
//	cout << endl << "NUMBER 5" << endl;
//	for (int i = 0; i < SIZE; i++) {
//		arr5[i] = rand() % 35 + 4;
//		cout << arr5[i];
//		cout << "============" << endl;
//	}
//}

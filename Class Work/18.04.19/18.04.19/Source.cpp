//
//
//
//Составить программу, которая будет генерировать случайные числа в интервале[a; b] и заполнять ими двумерный массив размером 10 на 10.
//В массиве необходимо найти номер строки с минимальным элементом.Поменять строки массива местами,
//строку с минимальным элементом и первую строку массива.Организовать удобный вывод на экран.

//#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <ctime>
//using namespace std;
//
//
//
//int main() {
//	srand(unsigned(time(NULL)));
//	const int size = 10;
//	int number = 0;
//	int arr[size][size];
//	
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			arr[i][j] = rand() % 10;
//			cout << arr[i][j] << endl;
//		}
//	}
//	for (int i = 0; i < size; i++) {
//		if (arr[i][size]) {
//
//		}
//	}
//	system("pause");
//	return 0;
//}

////Дан массив размера n, заполнить его случайными числами, Найти все нечётные числа массива.
//#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <ctime>
//using namespace std;
//
//void Fill(int size, int *&arr) {
//	int *tmparr = new int[size];
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 70 + 1;
//		cout << arr[i] << endl;
//	}
//	cout << "=========" << endl;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] % 2 != 0) {
//			cout << arr[i] << endl;
//		}
//	}
//}
//
//
//int main() {
//	srand(unsigned(time(NULL)));
//	int size;
//	cin >> size;
//	int *arr = new int [size];
//	Fill(size, arr);
//	system("pause");
//	return 0;
//}


//
//Задача на динамическое выделение памяти.Изначально есть указатель на массив с одним элементом.Пользователь вводит число.
//Если оно больше 0 записываем его в массив.Далее пользователь вводит второе число, тут уже, если оно больше 0, 
//надо пере выделять память для 2 - х элементов массива и записать в массив второе число.И так далее… 
//для 3 - х элементов, для 4 - х…  пока пользователь не введет отрицательное число.

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void Fill(int size, int *arr) {
	int print;
	cin >> print;
	int *tmparr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		if (arr[i] != 0) {
			tmparr[i] += print;
		}
		
	}
}

int main() {
	int size;
	cin >> size;
	int *arr = new int [size];
	Fill(size, arr);
	system("pause");
	return 0;
}


//Составить программу - тест  на экране по очереди появляются вопросы(вопросы выбираются программистом), 
//с вариантами ответов.В конце работы программа выдает количество заработанных баллов по результатам ответа.

//#include <iostream>
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//int main() {
//	
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int point = 0;
//	int answer = 0;
//	for (int i = 1; i <= 3; i++) {
//		cout << " \n[1] 2 + 2  \n[2] How many bytes in  << int >> ? \n[3] Which first program is usually written by programmers? ";
//		cin >> a;
//		system("cls");
//		if (a == 1 && b == 0) {
//			b++;
//			cout << " 2 + 2 = ? " << endl;
//			cin >> answer;
//			if (answer == 2 + 2) {
//				system("cls");
//				point++;
//				cout << "Right" << endl;
//			}
//			else if (answer != 2 + 2 && b == 1) {
//				system("cls");
//				cout << "Wrong!" << endl;
//			}
//			else if (b == 1) {
//				i--;
//				system("cls");
//				cout << "You answered this question " << endl;
//			}
//		}
//
//		else if (a == 2 && c == 0) {
//			c++;
//			system("cls");
//			cout << " How many bytes in int ? " << endl;
//			cin >> answer;
//			if (answer == 4) {
//				point++;
//				system("cls");
//				cout << "Right" << endl;
//
//			}
//			else if (answer != 4 && c == 1) {
//				system("cls");
//				cout << "Wrong!" << endl;
//			}
//			else if (c == 1) {
//				system("cls");
//				cout << "You answered this question " << endl;
//				i--;
//			}
//			else if (a == 3 && d == 0) {
//				d++;
//				system("cls");
//				cout << " Which first program is usually written by programmers? " << endl;
//				cin >> answer;
//				if (answer == 1) {
//					point++;
//					system("cls");
//					cout << "Right" << endl;
//				}
//			}
//			else if (answer != 1 && d == 1) {
//				system("cls");
//				cout << "Wrong!" << endl;
//			}
//			else if (d == 1) {
//				i--; system("cls");
//				cout << "You answered this question " << endl;
//			}
//		}
//	}
//	cout << "Points == " << point;
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <ctime>
using namespace std;
//Дано два масива : .Утворити третій масив мінімального можливого розміру, у якому зібрати :
//Елементи обох масивів;
//Спільні элементи обох массивов;
//Елементи масиву A, які не зустрічаються у B;
//Елементи масиву В, які не зустрічаються у А;
//Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).
void Fill(const int SIZE, int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;
	}
}
void elementa(int) {

}
void spilni(int arr2[], int arr3[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {
			if (arr2[i] == arr3[j]) {
				cout << arr2[i] << " = " << arr3[j] << endl;
			}
		}
	}
}
void concut(int arr[], int arr2[], int arr3[], int SIZE) {
	int tmp = 0;
	for (int i = 0; i < SIZE; i++) {
		arr[tmp] = arr2[i];
		tmp++;
	}
	for (int i = 0; i < SIZE; i++) {
		arr[tmp] = arr3[i];
		tmp++;
	}

}



int main() {
	srand(time(NULL));
	const int SIZE = 5;
	int arr[SIZE] = {};
	int arr2[SIZE] = {};
	int arr3[SIZE * 2] = {};
	Fill(SIZE, arr);
	Fill(SIZE, arr2);
	concut(arr, arr2, arr3, SIZE);
	spilni(arr2, arr, SIZE);
	system("pause");
	return 0;
}


//#include <iostream>
//#include <ctime>
//using namespace std;
////Дано два масива : .Утворити третій масив мінімального можливого розміру, у якому зібрати :
////Елементи обох масивів;
////Спільні элементи обох массивов;
////Елементи масиву A, які не зустрічаються у B;
////Елементи масиву В, які не зустрічаються у А;
////Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).
//void Fill(const int SIZE, int arr[]) {
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 10 + 1;
//	}
//}
//
//void spilni(int arr2[], int arr3[], const int SIZE) {
//	for (int i = 0; i < SIZE ; i++) {
//		
//		for (int j = 0; j < SIZE ; j++) {
//			if (arr2[i] == arr3[j]) {
//				cout << arr2[i] << " = " << arr3[j] << endl;
//		}
//		}
//	}
//}
//void concut(int arr[], int arr2[], int arr3[], int SIZE) {
//	int tmp = 0;
//	for (int i = 0; i < SIZE; i++) {
//		arr[tmp] = arr2[i];
//		tmp++;
//	}
//	for (int i = 0; i < SIZE; i++) {
//		arr[tmp] = arr3[i];
//		tmp++;
//	}
//
//}
//
//
//
//int main() {
//	srand(time(NULL));
//	const int SIZE = 5;
//	int arr[SIZE] = {};
//	int arr2[SIZE] = {};
//	int arr3[SIZE*2] = {};
//	Fill(SIZE, arr);
//	Fill(SIZE, arr2);
//	concut(arr, arr2, arr3, SIZE);
//	spilni(arr2, arr, SIZE);
//	//int *p = new int;
//	//cout << " var " << *p << " address " << p << endl;
//	system("pause");
//	return 0;
//}
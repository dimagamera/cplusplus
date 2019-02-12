#include <iostream>
#include <ctime>
using namespace std;


//C++
//Дано три числа.Оголосити вказівники на ці числа.Отримати добуток трьох заданих чисел,
//середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через вказівники).
//int main() {
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int *pointerA = &a;
	//int *pointerB = &b;
	//int *pointerC = &c;
	//cin >> *pointerA >> *pointerB >> *pointerC;
	//cout << "Dobutor = " << *pointerA * *pointerB * *pointerC << endl;
	//cout << "Arg = " << (*pointerA + *pointerB + *pointerC) / 3 << endl;
	//if (*pointerA < *pointerB && *pointerA < *pointerC) {
	//	cout << "Menshe " << *pointerA << endl;
	//}
	//else if (*pointerB < *pointerA && *pointerB < *pointerC) {
	//	cout << "Menshe "  << *pointerB << endl;
	//}
	//else if (*pointerC < *pointerA && *pointerC < *pointerB) {
	//	cout << "Menshe " << *pointerC << endl;
	//}
const int Student = 1;
const int Rating = 5;
const int Arg = 5;
int arr[Student];
int arrb[Arg];
int c;
int b;

void A() {
	for (int i = 0; i < Arg; i++) {
		i++;
		cout << "Lesson: " << arrb[i];
		for (int j = 0; j < Rating; j++) {
			arr[j] = rand() % 12 + 2;
			cout << " rating: " << arr[j] << endl;
		b = b+ arr[j];
		}

	}
	cout << "Arg = " << b / 5 << endl;
}



int main() {
	A();
	system("pause");
	return 0;
}
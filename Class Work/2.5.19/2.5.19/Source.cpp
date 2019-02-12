
//
//C++
//Написати перевантажені функції й основну програму, що їх викликає.
//для масиву який починається на парне число виконує
//циклічне зрушення вліво на кількість елементів рівному першому елементові масиву.
//для масиву який починається на непарне число виконує циклічне зрушення
//вправо на кількість елементів рівне останньому елементові масиву.

//#include <iostream>
//#include <ctime>
//using namespace std;
////void Fill(int A[],const int SIZE) {
////		for (int i = 0; i < SIZE; i++) {
////			A[i] = rand() % 32;
////			cout << A[i] << endl;
////			}
////		int sump = 0;
////		int sumn = 0;
////		for (int i = 0; i < SIZE; i++) {
////			if (A[i] %2 != 0) {
////				sump += A[SIZE];
////			}
////			else {
////				sumn += A[SIZE];
////			}
////		}
////		cout << sump << endl;
////}
////
////int main() {
////	srand((time(NULL)));
////	const int SIZE = 10;
////	int A[SIZE]{};
////	Fill(A, SIZE);
//
//	system("pause");
//	return 0;
//}

//3. Написати шаблони функцій для роботи з одновимірним масивом :
//a.введення елементів масиву(або заповнення випадковим чином),
//b.виводу елементів масиву на екран,
//c.пошуку першого входження елемента у масив(індексу входження, -1 - якщо не знайдено)
//d.пошуку останнього входження елемента у масив,
//e.перемішування елементів масиву випадковим чином.
//f.заповнення масиву однаковим заданим значенням
//Протестувати роботу шаблонних функцій для масивів цілого, дробового.


#include <iostream>
#include <ctime>
using namespace std;

template <typename T1, typename T2>
void Print(T1 A[],const T2 SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
			A[i] = rand() % 32 + (-12);	
	}
	for (int i = 0; i < A[i]; i++) {
		if (A[i] > 0) {
			cout << A[i] << endl;
		}
	}
}



int main() {
	srand((time(NULL)));
	const int SIZE = 10;
	int A[SIZE]{};
	Print(A,SIZE);



	system("pause");
	return 0;
}














//C++
//Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.
//Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
//функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
//шаблонну функцію Print(), 
//яка виводить елементи масиву на екран.Примітка!Протестувати дану функцію на масивах типу int, double, char
//функцію, яка повертає кількість відємних елементів масиву
//перевантажені функції :
//-для знаходження середнього арифметичного елементів масиву
//- для знаходження максимального елемента масиву в проміжку(між двома вказаними індексами)


//#include <iostream>
//#include <ctime>
//using namespace std;
//template <typename T1, typename T2>
//void Print(T1 A[],const T2 SIZE) {
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << A[i] << " ";
//	}
//}
//
//void  Fill(int A[], const int SIZE) {
//	for  (int i = 0; i < SIZE; i++)
//	{
//		A[i] = rand() % 32 + (-12);
//	}
//}
//
//int minuus(int A[], const int SIZE) {
//	int iterator = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (A[i] < 0) {
//			iterator++;
//		}
//	}
//	return iterator;
//}
//
//float minuus(float A[], const int SIZE) {
//	float iterator = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (A[i] < 0) {
//			iterator++;
//		}
//	}
//	return iterator;
//}
//
//int Average(int A[], const int SIZE) {
//	int sum = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		sum += A[i];
//	}
//	sum /= SIZE;
//	return sum;
//}
//
//float Average(float A[], const int SIZE) {
//	float sum = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		sum += A[i];
//	}
//	sum /= SIZE;
//	return sum;
//}
//
//
//int largestnum(int A[], const int SIZE, int a, int b ) {
//	int buf = 0;
//	for (int i = a; i < b; i++)
//	{
//		if (A[i] > buf) {
//			buf = A[i];
//		}
//		
//	}
//	return buf;
//}
//
//
//
//int main() {
//	int a = 0, b = 0;
//	srand((time(NULL)));
//	const int SIZE = 10;
//	int A[SIZE]{};
//	Fill(A, SIZE);
//	Print(A, SIZE);
//	cout << endl<< "AverageNum " << Average(A, SIZE) << endl;
//	cout << "The number of negative numbers " << minuus(A, SIZE) << endl;
//	cout << "Enter nums\n" << endl;
//	cin >> a >> b;
//	cout << "The largest num: " << largestnum(A, SIZE, a, b) << endl;
//	system("pause");
//	return 0;
//}

////cout << Sum(5, 10) << endl;
////cout << Sum(8.2, 2.4) << endl;
//cout << Sum(25, 6.2) << endl;
//cout << Sum(25.4, 5) << endl;
////Demo(8, 10);
////Demo(9.4, 1.2);
////Demo("Test", "World");
////Demo("World", 33);

//template <typename T1, typename T2>
//void Demo(T1 a, T2 b) {
//	cout << a << endl;
//	cout << b << endl;
//}
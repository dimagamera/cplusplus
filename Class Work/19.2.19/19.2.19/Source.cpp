//4. Написати функцію(ашаблонї), яка приймає два вказівника.За допомогою функції :
//Вивести на екран менше з двох введених чисел(з клавіатури)
//Збільшити на 10 менше число.

//#include <iostream>
//using namespace std;
//
//	void Fill (int &a, int &b) {
//	cout << "A = " << a << endl;
//	cout << "B = " << b << endl;
//	if (a < b) {
//		cout << "Menshe  A" << endl;
//		cout << "Before " << a << endl;
//		a *= 10;
//		cout << "Before " << a << endl;
//	}
//	else {
//		cout << "Menshe B" << endl;
//		cout << "Before " << b << endl;
//		b *= 10;
//		cout << "Before " << b << endl;
//	}
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	int *pA = &a;
//	int *pB = &b;
//	Fill(*pA, *pB);
//	
//	system("pause");
//	return 0;
//}

//#include <iostream>
////using namespace std;
////1.Написати функцію, яка приймає вказівник на змінну і записує в неї результат множення на  самоу себе.
//
////void FREF(int *a) {
////	*a = (*a) * (*a);
//// }
//
////2. Дано три числа.Оголосити посилання на ці числа.Отримати добуток трьох заданих чисел,
////середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через посилання).
////void FVAL(int &a, int &b, int &c) {
////	cout << "Posulanya = " << a * b*c << endl;
////	cout << "Aref = " << (a + b + c) / 3 << endl;
////	if (a < b && a < c) {
////		cout << "Menshe A" << endl;
////	}
////	else if (b < a && b < c) {
////		cout << "Menshe B" << endl;
////	}
////	else if (c < b && c < a) {
////		cout << "Menshe C" << endl;
////	}
////	else {
////	cout << "a = b = c" << endl;
//	//}
////	}
//
////3. Дано два масиви, впорядковати їх по зростанню.Сформуйте масив який складається з 
////елементів масивів А і В, впорядкованих по зростанню і виводить адреси елеиентів масиву
//
////#include <iostream>
//
//using namespace std;
////1.Написати функцію, яка приймає вказівник на змінну і записує в неї результат множення на  самоу себе.
//
////void FREF(int *a) {
////	*a = (*a) * (*a);
//// }
//
////2. Дано три числа.Оголосити посилання на ці числа.Отримати добуток трьох заданих чисел,
////середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через посилання).
////void FVAL(int &a, int &b, int &c) {
////	cout << "Posulanya = " << a * b*c << endl;
////	cout << "Aref = " << (a + b + c) / 3 << endl;
////	if (a < b && a < c) {
////		cout << "Menshe A" << endl;
////	}
////	else if (b < a && b < c) {
////		cout << "Menshe B" << endl;
////	}
////	else if (c < b && c < a) {
////		cout << "Menshe C" << endl;
////	}
////	else {
////	cout << "a = b = c" << endl;
//	//}
////	}
//
////3. Дано два масиви, впорядковати їх по зростанню.Сформуйте масив який складається з 
////елементів масивів А і В, впорядкованих по зростанню і виводить адреси елеиентів масиву
//void fill(int arr, int arr2, const int *SIZE, int arr3, const int *SIZE2) {
//
//
//}
//int main() {
//	const int SIZE = 5;
//	const int SIZE2 = 10;
//	int arr[SIZE] = { 1,2, 5 , 6 ,7 };
//	int arr2[SIZE] = { 51, 76, 10 ,12 ,8 };
//	fill(arr, arr2, SIZE);
//	cout << arr[5];
//	/*int a = 10;
//	int b = 60;
//	int c = 14;*/
//	//int *pA = &a;
//	//int *pB = &b;
//	//int *pC = &b;
//	//FVAL(*pA, *pB, *pC);
//	//FREF(&a);
//	//cout << "Result = " << a << endl;
//	system("pause");
//	return 0;
//}


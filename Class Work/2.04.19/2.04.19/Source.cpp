#include <iostream>
#include <ctime>
#include <string>
#define WEEK 7
//#define SPACE "\t"
//#define SUM(a,b,c)((a)>(b)&&(a)>(c)?(a):(b)>(a)&&(b)>(c)?(b):(c)>(a)&&(c)>(b)?(c):0)
#define qwerty(a,b)((a)*(a)+(b)*(b))

//#define DEBUG
//
//#define PROD 2
using namespace std;

//
//C++
//Написати програму, яка знаходить суму елементів масиву.
//Розмір масиву є константою, яка оголошена на рівні препроцесора
//C++
//Написати макрос(макро - функцію), 
//який знаходить та повертає максимальне з трьох переданих йому чисел


//C++
//Написати макрос(макро - функцію), який обчислює т
//а виводить на екран суму квадратів двох переданих чисел


int main() {
//cout << SUM(7, 523, 1123) << endl;
	int arr[WEEK];
	int sum = 0;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < WEEK; i++) {
		arr[i] = rand() % 95;
		cout << arr[i] << endl;
		sum += arr[i];
	}
	cout << sum << endl;
	//cout << qwerty(2,3);
	system("pause");
	return 0;
}


//cout << WEEK << endl;
//cout << SPACE  << "sadas "<< endl;
//cout << SUM(5, 15) << endl;

//#ifdef DEBUG
//	cout << "START LOOP" << endl;
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << i << endl;
//	}
//#ifdef DEBUG
//	cout << "End LOOP" << endl;
//#endif
//#else 
//cout << "LOOP NOT STARTED" << endl;
//#endif




//union test {
//
//	short a;
//	int b;
//	double c;
//};
//
//int main() {
//
//	test qwe;
//	qwe.a = 49;
//	qwe.b = 200;
//	qwe.c = 300;

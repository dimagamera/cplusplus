#include <iostream>
#include <ctime>



//C++
//Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні
using namespace std;
//int couter = 0;
//void func(int couter) {
//	couter--;
//	cout << couter << endl;
//	if (couter > 0) {
//		func(couter);
//	}
//}


//int sum = 0;
//int a= 0;
//int b = 0;
//int func(int a, int b) {
//	if (a==b-1){
//		return sum;
//	}
//	a++;
//	sum = sum + a;
//return func(a, b);
//}
//int main() {
//	cout << func(3, 8) << endl;
//	system("pause");
//	return 0;
//}
//
//
//C++
//Написати програму для виводу на екран чисел Фібоначчі : (1, 1, 2, 3, 5, 8...xn = xn - 1 + xn - 2), менших заданого числа Q.


int a = 4;
int c = 1;
int i= 0;
int ans = 0;
int b;
int func(int a, int i, int ans, int b, int c) {
	cout << endl;
	cin >> a;
	for(int i = 0; i < a; i++ ){
		ans = c + b;
		b = c;
		c = ans;
	}	
	cout << b;
	return func(a, i, ans, b, c);
}
int main() {
	cout << func(a, i, ans, b, c) << endl;
	system("pause");
	return 0;
}
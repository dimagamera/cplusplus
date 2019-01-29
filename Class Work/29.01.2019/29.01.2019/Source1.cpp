#include <iostream>

using namespace std;

//1.  Написать функцию Dohod, которая вычисляет доход по вкладу.
//Исходными данными для функции являются 
//: величина вклада, процентная ставка(годовых) и срок вклада(количество дней).

int Dohod(int s, int i, int t)
{
	return s * (i*t) / (365*100) ;
}
int main() {
	int s = 0;
	int i = 0; 
	int t = 0;
	Dohod(s, i, t);
	cout << "Write sum." << endl;
	cin >> s;
	cout << "Write procent" << endl;
	cin >> i;
	cout << "Write srok" << endl;
	cin >> t;
	cout << Dohod(s, i, t);
	system("pause");
	return 0;
}

//C++
//Написати функцію, яка приймає три аргументи : години, хвилини, секунди.
//Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах


#include <iostream>

using namespace std;


int Plus(int hourse, int minuts , int second) {
	
	return hourse * 60 * 60 + minuts * 60 + second;

}

int main() {
	int hour = 0;
	int minuts = 0;
	int second = 0;
	Plus(hour, minuts, second);
	cin >> hour >> minuts >> second;
	cout << "" << Plus(hour, minuts, second) << endl;

	system("pause");
	return 0;
}
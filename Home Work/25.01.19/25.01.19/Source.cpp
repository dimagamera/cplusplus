#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(unsigned(time(0)));

	int const A = 5000;
	int ARR[5];
	int balance = 250;
	int put;
	int b = 0;
	int r = rand() % 5 - 0;

	for (; true;) {
		r = rand() % 5 - 0;
		cout << "Put money | 250 UAH" << endl;
		cin >> put;
		if (put == 1 && balance >= 250)
			balance -= 250;
		cout << "0 - horse, 1 - horse, 2 - horse, 3 - horse, 4 - horse" << endl;
		cin >> ARR[b];

		if (ARR[b] == 0)
			cout << "you put on horse number 0" << endl;

		if (r == 0 && ARR[b] == 0)
			cout << "win horse  #0" << endl;
		else if (ARR[b] == 1)
			cout << "you put on horse number 1" << endl;
		if (r == 1 && ARR[b] == 1)
			cout << "win horse #1" << endl;


		else if (ARR[b] == 2)
			cout << "you put on horse number 2" << endl;
		if (r == 2 && ARR[b] == 2)
			cout << "win horse #2" << endl;

		else if (ARR[b] == 3)
			cout << "you put on horse number 3" << endl;
		if (r == 3 && ARR[b] == 3)
			cout << "win horse #3" << endl;

		else if (ARR[b] == 4)
			cout << "you put on horse number 4" << endl;
		if (r == 3 && ARR[b] == 4)
			cout << "win horse #4 | + 5000 UAN" << endl;
		balance += A;
		else
		{

			cout << "You lose" << endl;
			balance -= 250;
		}
	}

	system("pause");
	return 0;
}
//#include <iostream>
//
//using namespace std;
//
////1.  Написать функцию Dohod, которая вычисляет доход по вкладу.
////Исходными данными для функции являются 
////: величина вклада, процентная ставка(годовых) и срок вклада(количество дней).
//
//int Dohod(int s, int i, int t, int day = 365)
//{
//	return s* i * t / 365;
//}
//int main() {
//	int s = 1;
//	int i = 1;
//	int t = 1;
//	Dohod(s, i, t);
//	cout << "Write sum." << endl;
//	cin >> s;
//	cout << "Write procent" << endl;
//	cin >> i;
//	cout << "Write srok" << endl;
//	cin >> t;
//
//	cout << Dohod(s, i, t);
//
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <ctime>
//Написать программу, реализующую игру "21"
//.Действия по выдаче очередной карты игроку и компьютеру реализуйте в виде функции.
using namespace std;
srand(time(NULL));
void ochko( int king = 4, int dama = 3, int valet=2 ){

	int a = rand() % 11;;
	int pointplayer1;
	int pointplayer2;
	int playerone;
	int playertwo;
	for (int i = 0; true; i++) {
		cout << "take" << end;
		cin >> a;
		if (a == 1) {
			pointplayer1 += 1;
		}
		else if(a == 2) {
			pointplayer2 += 2;
		}
		else if (a == 3) {
			pointplayer2 += 3;
		}
		else if (a == 4) {
			pointplayer2 += 4;
		}
		else if (a == 5) {
			pointplayer2 += 5;
		}
		else if (a == 6) {
			pointplayer2 += 6;
		}
	}
}
int main() {


	system("pause");
	return 0;
}


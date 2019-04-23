//#include <iostream>
//#include <string>
//
//using namespace std;
////Завдання 1. Класна робота
////Створити клас "Точка" (Point), який складається з двох полів типу int: X та Y.Необхідно забезпечити :
////Введення координат точки користувачем
////Вивід інформації про точку на екран
////Можливість зміни будь - якої з координат на запит користувача(X або Y)
//class Point {
//public:
//	int x;
//	int y;
//	int a;
//	void pointer() {
//		cout << "X = " << x << " Y = " << y<< endl;
//		cout << " Сhange? 1.Yes 2. No ";
//		cin >> a;
//		if (a == 1) {
//			cout << "Enter new Y = " << endl;
//			cin >> y;
//			cout << "Enter new X = " << endl;
//			cin >> x;
//			pointer();
//		}
//		else {}
//	}
//
//};
//class Car {
//private:
//	string model;
//	string Color;
//public:
//	void showcar() {
//		cout << "model " << model << "Color " << Color;
//	}
//	void Setmodel(string newmodel) {
//		model = newmodel;
//	}
//	void SetColor(string newcolor) {
//		Color = newcolor;
//	}
//};
//int main() {
//	int a;
//	Point point;
//	cout << "Enter Y = " << endl;
//	cin >> point.y;
//	cout << "Enter X = " << endl;
//	cin >> point.x;
//	point.pointer();
//	Car audi;
//	audi.Setmodel("Audi");
//	audi.SetColor("Black");
//	audi.showcar();
//	system("pause");
//	return 0;
//}


//Написати клас "Банківський рахунок" (Account), який містить :
//Номер рахунку
//Розмір коштів на рахунку
//Назва валюти рахунку(рублі, гривні, евро тощо), для позначення якої можна скористатись одним символом : R, G, E, $ тощо
//Забезпечити можливість :
//Відкривати рахунок та первинно вносити гроші на рахунок
//Знімати гроші з рахунку
//Докладати гроші на рахунок
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Account {
public:
	int number = 777700017;
	int cash = 0;
	string name = "E";
	void acc() {
		cout << "Number: " << number << "\ncash:  " << cash << "\nname:" << name << endl;
	}
};


//Розмір знижки(знижка передбачається накопичуваною; на початковому етапі вона рівна 1 % .За кожні 1000 грн.покупки, сума знижки збільшується на 1 % .)
int main() {
	Account account;
	int a = 0;
	int take = 0;
	int b = 0;
	for (;true;) {
		cout << "1 = Open account | 2 = Withdraw money | 3 = Make money " << endl;
		cin >> a;
		if (a == 1) {
			system("cls");
			account.cash;
			account.number;
			account.name;
			account.acc();
	
		}
		else if (a == 2) {
			account.acc();
			account.cash;
			account.number;
			account.name;
			cout << "Enter " << endl;
			cin >> take;
			if (take >= 1000 ) {
				b++;
				account.cash -= ((take*b)/100);
				cout << endl << "discount: " << b << " | " << " =  " << ((take*b) / 100) << endl;
				account.number;
				account.name;
				account.acc();
			}
			else {
				account.cash -= take;
				account.acc();
			}
			}
		else if (a == 3) {
			system("cls");
			account.cash;
			account.number;
			account.name;
			cout << "Enter " << endl;
			cin >> take;
			account.cash += take;
			account.acc();
		}
		/*Car audi;
		audi.SetModel("Audi");
		audi.SetColor("Black");
		audi.SetYear(2006);
		audi.SetPower(1.8);
		audi.ShowCarInfo();

		Car bmw;
		bmw.SetModel("BMW");
		bmw.SetColor("White");
		bmw.SetYear(2010);
		bmw.SetPower(2.0);
		bmw.ShowCarInfo();

		cout << bmw.GetYear() << endl;
		bmw.SetYear(2011);
		cout << bmw.GetYear() << endl;


		cout << audi.GetPower() << endl;*/
	}
	system("pause");
	return 0;
}

//Написати клас "Банківський рахунок" (Account), який містить :
//Номер рахунку
//Розмір коштів на рахунку
//Назва валюти рахунку(рублі, гривні, евро тощо), для позначення якої можна скористатись одним символом : R, G, E, $ тощо
//Забезпечити можливість :
//Відкривати рахунок та первинно вносити гроші на рахунок
//Знімати гроші з рахунку
//Докладати гроші на рахунок
//Розмір знижки(знижка передбачається накопичуваною; на початковому етапі вона рівна 1 % .За кожні 1000 грн.покупки, 
//сума знижки збільшується на 1 % .)
//Завдання 1. Домашнє завдання
//
//До класноЇ роботи додати наступний функціонал.
//Можливість збереження в файлі інформації про картку.
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>



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


int main() {
	Account account;
	int a = 0;
	int take = 0;
	double b = 0;
	for (;true;) {
		cout << "1 = Open account | 2 = Withdraw money | 3 = Make money | 4 = Save to file" << endl;
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
		else if (a == 4) {
			string path = "card.txt";
			
			ofstream fout;
			fout.open(path);

			if (!fout.is_open()) {
				cout << "ERROR";
			}
			else {
				system("cls");
				cout << "Сard information is recorded!" << endl;
				fout << "Сash: " << account.cash << "\nNumber: " << account.number << "\nName: " << account.name;
			}
			fout.close();
		}

	}

	system("pause");
	return 0;
}
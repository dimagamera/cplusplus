#include <iostream>
#include <ctime>
#include <string>
using namespace std;
//C++
//Створити структуру, яка описує тварину(назва, клас, кличка).
//Створити функції для роботи з цією структурою(заповнення об’єкта, вивід на екран даних про об’єкт, функція «подати голос»).
struct Animal {
	string clas;
	string name;
	string breed;
	string age;
	void ShowInfo() {
		cout << "Clas = " << clas << "\n Name: " << name << "\n Breed " << breed << "\n Age " << age << endl;
	}
	void SetDescription (string classs,string namme, string breedd, string agge) {
		clas = classs;
		breed = breedd;
		name = namme;
		age = agge;
	}
};

int main() {
	Animal dog;
	string classs;
	cin >> classs;

	dog.SetDescription(classs, namme, breedd, agge);
	dog.ShowInfo();

	system("pause");
	return 0;
}
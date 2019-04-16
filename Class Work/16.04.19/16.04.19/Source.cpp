#include <iostream>
#include <string>
#include <ctime>

using namespace std;


//Створити структуру з бітовими полями Час(години.хвилини, секунди).
//Продумати яка мінімальна кількість біт потрібна для збереження певного  елемента структури.Визначити функції :
//заповнення об’єкта структури з клавіатури
//вивід  об’єкта структури  на екран

struct Data {
	unsigned int h : 6;
	unsigned int m : 6;
	unsigned int s : 6;
	unsigned int d : 6;
	unsigned int mounth : 5;
	unsigned int y : 11;
	void set_h(unsigned int new_h) {
		cin >> new_h;
		h = new_h;
	}
	void set_m(unsigned int new_m) {
		cin >> new_m;
		m = new_m;
	}
	void set_s(unsigned int new_s) {
		cin >> new_s;
		s = new_s;
	}
	void set_d(unsigned int new_d) {
		cin >> new_d;
		d = new_d;
	}
	void set_mounth(unsigned int new_mounth) {
		cin >> new_mounth;
		mounth = new_mounth;
	}
	void set_y(unsigned int new_y) {
		cin >> new_y;
		y = new_y;
	}
	void print(){
		
		cout << "Year = " << y << " Mounth = " << mounth << " Day = " << d << " Hour = " << h << " Minutes = " << m << " Seconds = " << s << endl;
	}
};

int main() {

	Data data;
	print();
	
	//cout << "Enter year: " << endl;

	//cout << "Enter mounth: " << endl;

	//cout << "Enter day: " << endl;
	//
	//cout << "Enter Hour: " << endl;
	//
	//cout << "Enter minutes" << endl;

	//cout << "Enter seconds" << endl;

	system("pause");
	return 0;
}
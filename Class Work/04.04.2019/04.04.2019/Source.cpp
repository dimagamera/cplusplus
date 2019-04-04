#include <iostream>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;


int main() {
	srand(unsigned(time(NULL)));
	int press;
	cout << "1 - write, 2 - read" << endl;
	cin >> press;
	if (press == 1) {
		ofstream writefile;
		string path = "DB.txt";
		writefile.open(path, ofstream::app);
		if (!writefile.is_open()) {
		}
		else {
			string text;
			cin >> text;
			writefile << text << endl;
		}
		if (press == 2) {
			ifstream readfile;
			readfile.open(path);
			/*	char data;
				while (readfile.get(data)) {
					cout << data << endl;
				}*/
			string data;
			while (!readfile.eof()) {
				getline(readfile, data);
				cout << data << endl;
			}

			readfile.close();
		}
	}
	system("pause");
	return 0;
}
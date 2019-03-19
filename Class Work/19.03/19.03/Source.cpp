//#include <iostream>
//#include <ctime>
//#include <string>
//
//
//using namespace std;
//
//int Strlengts(string *str) {
//	int couter = 0;
//	while (str[couter] != "\0") {
//		couter++;
//	}
//	return couter;
//}
//
//int main() {
//
//	string str1;
//	string str2;
//	//string res = str+  " " + str1 + " My test";
//	cin >> str1;
//	cin >> str2;
//
//	if (string(str1) > string(str2)) {
//		cout << "a > o" << endl;
//	}
//	else if (string(str1) < string(str2)) {
//		cout << "a < o " << endl;
//	}
//	else
//		cout << " a == o" << endl;
//	//cout << res << endl;
//	////char str1[255] ;
//	////char str2[255] ;
//	////cin >> str1 >> str2;
//	/////*cout <<*/ strcat_s(str1, str2);
//	////cout << str1 << endl;
//	//cout << str << endl;
//	////char str[255];
//	////cin >> str;
//	////cout << Strlengts(str) << endl;
//	//strlen(res);
//
//	system("pause");
//	return 0;
//}

//C++
//Дано рядок.Видалити із рядка заданий символ.Результат розмістити у новому рядку.
#include <iostream>
#include <ctime>
#include <string>


using namespace std;

void Strlengts(char *str, int del) {

	int couter = 0;

	while (str[couter] > '\0') {
		couter++;
		if (str[couter] != del) {
			cout << str[couter];
		}
	}
}
int main() {

	//string str1;
	//string str2;
	//string res = str +  " " + str1 + " My test";
	//cin >> str1;
	//cin >> str2;
	//cout << 
	//if (string(str1) > string(str2)) {
	//	cout << "a > o" << endl;
	//}
	//else if (string(str1) < string(str2)) {
	//	cout << "a < o " << endl;
	//}
	//else
	//	cout << " a == o" << endl;
	//cout << res << endl;
	////char str1[255] ;
	////char str2[255] ;
	////cin >> str1 >> str2;
	/////*cout <<*/ strcat_s(str1, str2);
	////cout << str1 << endl;
	char str[255];
	cin >> str;
	cout << str;
	int del;
	cout << "\n" <<  "Enter number symbol" << endl;
	cin >> del;
	Strlengts(str, del);



	system("pause");
	return 0;
}
//
//
//#include <iostream>
//#include <ctime>
//#include <string>
//
//
//using namespace std;
//
//void Strlengts(char *str) {
//
//	int couter = 0;
//	int letterbig = 0;
//	int letterlittle = 0;
//	int figure = 0;
//	int punctuation = 0;
//	while (str[couter] > '\0') {
//		couter++;
//		if (str[couter] >= 48 && str[couter] <= 57)
//		{
//			figure++;
//		}
//		else if (str[couter] >= 65 && str[couter] <= 90) {
//			letterbig++;
//		}
//		else if (str[couter] >= 97 && str[couter] <= 122) {
//			letterlittle++;
//		}
//		else if (str[couter] >= 39 && str[couter] <= 46)
//			punctuation++;
//	}
//
//
//	cout << "numbers: " << figure << endl;
//	cout << "Letter big: " << letterbig << endl;
//	cout << "Letter little: " << letterlittle << endl;
//	cout << "symbol: " << punctuation << endl;
//}
//
//int main() {
//
//	//string str1;
//	//string str2;
//	//string res = str +  " " + str1 + " My test";
//	//cin >> str1;
//	//cin >> str2;
//	//cout << 
//	//if (string(str1) > string(str2)) {
//	//	cout << "a > o" << endl;
//	//}
//	//else if (string(str1) < string(str2)) {
//	//	cout << "a < o " << endl;
//	//}
//	//else
//	//	cout << " a == o" << endl;
//	//cout << res << endl;
//	////char str1[255] ;
//	////char str2[255] ;
//	////cin >> str1 >> str2;
//	/////*cout <<*/ strcat_s(str1, str2);
//	////cout << str1 << endl;
//	char str[255];
//	cin >> str;
//	Strlengts(str);
//
//
//
//	system("pause");
//	return 0;
//}
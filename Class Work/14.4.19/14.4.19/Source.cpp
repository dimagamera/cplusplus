//C++
//Написати програму, яка отримує від користувача довільний набір цифр(кодів) та виводить на екран новоутворений рядок символів.
//Наприклад, при введенні цифр 65 66 65 на екрані буде ABA
//# include <iostream>
//
//using namespace std;
//
//int main() {

//char strArr[255];
//
//for (; true;) {
//	cout << "Enter strArr" << endl;
//	cin >> strArr;
//	cout << "Text: " << strArr << " CharCode = " << (char)strArr << "\t";
//}
//cout << endl;

//}

//C++
//Написати програму, яка отримує від користувача довільний набір cимволів та виводить на екран рядок кодів символів, по суті,
//закодований рядок.Наприклад, при введенні ABA на екрані буде 65 66 65.
//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//	char strArr[255];
//	int a = 0;
//	cout << "Enter strArr" << endl;
//	cin >> strArr;
//	for (int i = 0; i < strlen(strArr); i++) {
//	
//		a = strArr[i];
//		cout << "Text: " << strArr[i] << " CharCode = " << a << "\n";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

# include <iostream>

using namespace std;

int main() {

	char strArr[255];
	int a = 0;
	cout << "Enter strArr" << endl;
	cin >> strArr;
	for (int i = 0; i < strlen(strArr); i++) {

		a = strArr[i];
		cout << "Text: " << strArr[i] << " CharCode = " << a << "\n";
	}

	cout << "=============Cript=============" << endl;
	for (int i = 0; i < strlen(strArr); i++) {
		a = strArr[i];
		cout << "Text: " << strArr[i] << " CharCode = " << a << "\n";
	}

	system("pause");
	return 0;
}

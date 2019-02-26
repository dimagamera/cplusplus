#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
void fill(T arr[5][5], const int &SIZE) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = rand() % 20 + 3;
		}
	}
}
template <typename T>
void print(T arr[5][5], const int &SIZE) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << " ";
		}
	}
}

template <typename T>
void element(T arr, const int SIZE, int max, int index){
	for (int t = 1; t < 10; t--) {
		if (max < arr[5][5]) {
			index += max;
		}
	}
	cout << " == " <<  index << endl;
}

int main() {
	srand(time(NULL));
	int arr[5][5] = {};
	const int SIZE = 5;
	int max = 0;
	int index = 0;
	fill(arr, SIZE);
	print(arr, SIZE);
	element(arr, SIZE, max, index);
	system("pause");
	return 0;
}



//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void fill(int rnd, int sum) {
//	for (int i = 0; i < 10; i++) {
//	rnd = rand() % 17 ;
//	cout <<  endl <<rnd;
//	sum += rnd;
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int rnd = 0;
//	int sum = 0;
//	fill(rnd, sum);
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}



//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void fill(int arr[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 20 + 3;
//	}
//}
//
//void print(int arr[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		cout << arr[i] << "\t";	
//}
//	cout << endl;
//}
//
//void printarr(int arr[], const int SIZE, int &index) {
//	for (;index < SIZE; index++) {
//		if (index % 2 == 0)
//		cout << arr[index] << "\t";
//	}
//}
//int main() {
//	srand(time(NULL));
//	const int SIZE = 10;
//	int arr[SIZE] = {};
//	int index = 2;
//	fill(arr, SIZE);
//	print(arr, SIZE);
//	printarr(arr, SIZE, index);
//	system("pause");
//	return 0;
//}
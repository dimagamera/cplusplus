#include <iostream>
#include <ctime>
using namespace std;

const int SIZE = 20;
int arr[SIZE];

void PrintArr( int arr[], const int SIZE);
int main() {
	PrintArr( int arr[], const int SIZE) ;

	system ("pause");
	return 0;

}


void PrintArr(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		srand(unsigned int(time(NULL)));
		i = rand() % 40 - 20;
		}
}
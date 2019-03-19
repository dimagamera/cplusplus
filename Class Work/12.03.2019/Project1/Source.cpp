//C++
//Написати функції для роботи з динамічною матрицею :
//Функція створення динамічної матриці розміром row x col, де row та col
//Функція заповнення матриці
//Функція виводу матриці
//Функція доповнення матриці новим рядком
//Функція видалення з матриці рядка за вказаним номером
//Функція вставки нового рядка за вказаним номером
//Функція доповнення матриці новим стовпчиком
//Функція видалення з матриці стовпця за вказаним номером
//Функція вставки нового стовпця за вказаним номером


# include <iostream>
# include <ctime>
using namespace std;


void fill(int cols, int rows, int **&arr) {
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void print(int cols, int rows, int **&arr) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Push(int**&arr, int rows, int cols)
{
	cout << "\t\tDob ROW" << endl;
	int **tmpArr = new int*[rows + 1];
	for (int i = 0; i < rows + 1; i++)
		tmpArr[i] = new int[cols];

	for (int i = 0; i < cols; i++)
	{
		tmpArr[0][i] = rand() % 20;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmpArr[i][j] = arr[i][j];
		}
	}
	//for (int i = 0; i < rows; i++)
	////	delete[]arr[i];
	////delete[]arr;
	arr = tmpArr;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}


int main() {
	srand(unsigned(time(NULL)));

	int cols = 0;
	int rows = 0;
	int **arr = new int *[rows];
	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;
	fill(cols, rows, arr);
	print(cols, rows, arr);
	Push(arr, rows, cols);
	
	//
	//for (int i = 0; i < rows; i++) {
	//	delete[]arr[i];
	//}


	//delete[]arr;

	system("pause");
	return 0;
}
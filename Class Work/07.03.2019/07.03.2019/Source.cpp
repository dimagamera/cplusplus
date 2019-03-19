#include <iostream>
#include <ctime>
using namespace std;


//Написать программу «успеваемость».Пользователь вводит три оценки для каждого ученика.
//	Оценки с физики, математики и англ.языка.Средний бал записываем в масив средних баллов.В результате должно быть 10 средних баллов.
//	Реализовать меню для пользователя.Отсортировать тот массив, информация по котором нам сейчас нужна.
//	Связность оценок должна соблюдаться.Тоесть если math[0] = 5 и engl[0] = 8 то после сортировки массива с оценками за математику, 
//	массивы других оценок так же должны поменяться.
//	Вывод оценок(вывод содержимого массива)
//	Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
//	Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
//	Вывести все оценки самого успешного ученика по английскому языку.
//	Вывести все оценки самого неуспешного ученика в классе
//	Вывести все оценки самого успешного ученика с точных наук(физика и математика

void Fill(int arr[], int arrrating[], int size, int rating) {
	int tmp = 0;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Enter rating = ";
		cin >> tmp;
		arrrating[i] = tmp;
		cout << i << " " << arrrating[i] << " 1 - physics, 2 - maths, 3 - English"  << arrrating[i] << endl;
	}
	for (int i = 0; i < size; i++) {
		cout << "Enter rating = ";
		cin >> tmp;
		arrrating[i] = tmp;
		cout << i << " " << arrrating[i] << " 1 - physics, 2 - maths, 3 - English" << arrrating[i] << endl;
	}
	for (int i = 0; i < size; i++) {
		cout << "Enter rating = ";
		cin >> tmp;
		arrrating[i] = tmp;
		cout << i << " " << arrrating[i] << " 1 - physics, 2 - maths, 3 - English" << arrrating[i] << endl;
	}
}

void Fillst(int arr[], int arrating[], int rating, int sizest) {

}





int main() {
	srand(unsigned(time(NULL)));
	int student1 = 0, student2 = 0, student3 = 0;
	int	rating= 0;
	int size = 0;
	int sizest = 0;
	int *arr = new int[size];
	int *arrst = new int[size];
	int *arrratipg = new int[size];
	Fill(arr, arrratipg, size, rating);
	system("pause");
	return 0;
}
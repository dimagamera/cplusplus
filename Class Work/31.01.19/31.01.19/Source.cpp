//1. C++
//Написти перевантажені функції для знаходження добутку трьох трьох переданих чисел.

//
//#include <iostream>
//
//using namespace std;
//
//int Plus(int a, int b);
//double Plus(int a, int b, int c);
//void Plus(){
//	cout << "double " << Plus(4.5, 60.3, 4.9) << endl << endl;
//	cout << " int " << Plus(3, 3);
//}
//
//int main() {
//	
//	Plus();
//	system("pause");
//	return 0;
//}
//
//int Plus(int a, int b) {
//	cout << "int Plus" << endl;
//	return a + b;
//}
//double Plus(int a, int b, int c) {
//
//	return a + b + c;
//}


//2. C++
//Написати наступні функції, які в якості параметра приймають одновимірний масив і 
//його розмірністю.Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
//функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
//шаблонну функцію Print(), яка виводить елементи масиву на екран.Примітка!Протестувати дану
//функцію на масивах типу int, double,
//функцію, яка повертає кількість відємних елементів масиву
//перевантажені функції :
//-для знаходження середнього арифметичного елементів масиву
//- для знаходження максимального елемента масиву в проміжку(між двома вказаними індексами)
//
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//void Fill();
//void Print();
//int P(int max, int mass[]);
//
//
//int main() {
//	srand(unsigned(time(NULL)));
//	
//	Print();
//	system("pause");
//	return 0;
//}
//
//void Fill() {
//
//	srand(unsigned(time(NULL)));
//	int const A = 10;
//	int arr = 0;
//	int b = 0;
//	int D[A] = { 5, 6, 8, 8, 9 };
//	for (int i = 0; i < A; i++) {
//		D[arr] = rand() % 40 + (-20);
//		cout << D[arr] << endl << endl;
//		b = b + D[arr];
//	}
//	cout << "arefmetichne = " << b / 10;
//
//	int r = 0;
//	int v = 0;
//	cin >> r >> v;
//
//	for (int i = 0; i < 10; i++) {
//		if (D[arr] > r && D[arr] < v) {
//	
//		}
//	}
//}
//
//
//void Print() {
//	Fill();
//}


//4.C++
//Даний масив чисел.Написати функцію, яка сортує масив по зростанню або по спаданню,
//в залежності від третього параметра функції.Якщо він рівний 0, сортування йде по спаданню, якщо 1, 
//тоді по зростанню.Перші 2 параметра функції - це масив і його розмір, третій параметр по замовчуванню рівний 1.

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void Fill(int arr[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 30;
//	}
//
//}
//void Print(int arr[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{	
//		cout<<arr[i]<< endl;
//	}
//	
//}
//void sortarr(int arr[],const int SIZE,int buf=1)
//{
//	if (buf==1)
//	{
//		for (int i = SIZE - 1; i >= 1; i--) {
//
//			for (int j = 0; j < i; j++) {
//				if (arr[j] > arr[j + 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//	}
//	else if (buf == 0)
//	{
//		for (int i = 0; i < SIZE; i++)
//			for (int a = SIZE - i - 1; a > 0; a--)
//				if (arr[a] > arr[a - 1]) {
//					int buffer = arr[a];
//					arr[a] = arr[a - 1];
//					arr[a - 1] = buffer;
//				}
//	}	
//}
//int main()
//{
//	int num1 = 0;
//	const int SIZE = 10;
//	int arr[SIZE]{};
//	srand(unsigned(time(NULL)));
//
//	Fill(arr,SIZE);
//	Print(arr, SIZE);
//	cout << endl << " enter ==> ";
//	cin >> num1;
//	sortarr(arr, SIZE, num1);
//	Print(arr, SIZE);
//	system("pause");
//	return 0;
//}

//5. C++
//Даний масив з 20 цілих чисел з значеннями від 1 до 20. Необхідно:
//написати функцію, яка розкидає елементи масиву довільним чином;
//створити випадкове число з того ж діапазону і знайти позицію
//цього випадкового числа в масиві;
//відсортувати елементи масиву, які знаходяться справа 
//від знайденої позиції по спаданню, а елементи масиву, які знаходяться справа від знайденої позиції по зростанню.
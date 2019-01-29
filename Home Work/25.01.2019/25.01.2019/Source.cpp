#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(unsigned(time(NULL)));
	const int o = 10;
	int ARRA[o], ARRB[o];


	for (int i = 0; i < o; i++)
	{
		ARRA[i] = rand() % 20;
		ARRA[i] = ARRB[i];
	}

	const int SIZE = 10;
	int ARRA[SIZE], ARRB[SIZE];
	int j = 0, i = 0;
	bool numarr = false;
	for (i = 0; i < SIZE; i++)
	{
		ARRA[i] = rand() % 100;

	}
	j = SIZE - 1;
	i = 0;
	for (; j >= 0; j--)
	{
		ARRB[i] = ARRA[j];
		i++;
	}
	for (i = 0; i < SIZE; i++)
	{
		if (numarr == false)
		{
			cout << "ARR(1)\tARR(2)\n";
			numarr = true;
		}
		cout << ARRA[i] << "\t";
		cout << ARRB[i] << endl;

	}
	system("pause");
	return 0;
}
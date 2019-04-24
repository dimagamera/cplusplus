///*1.	Äàíî ö³ëî÷èñåëüíèé îäíîâèì³ðíèé ìàñèâ.
//Çàïîâíèòè éîãî, âèâåñòè íà åêðàí ó ïðÿìîìó òà çâîðîòíüîìó ïîðÿäêó òà ïîðàõóâàòè ñóìó åëåìåíò³â ç âèêîðèñòàííÿì âêàç³âíèê³â*/
////#include <iostream>
////#include<ctime>
////void fillarr(int arr[], const int *SIZE)
////{
////	for (short i = 0; i < *SIZE; i++)
////	{
////		arr[i] = rand() % 10 + 1;;
////	}
////}
////int printarr(int arr[], const int *SIZE)
////{
////	int sum = 0;
////	int *psum = &sum;
////	for (short i = 0; i < *SIZE; i++)
////	{
////		std::cout << *(arr + i) << " ";
////	}
////	std::cout << std::endl;
////	for (short i = *SIZE - 1; i >= 0; i--)
////	{
////		std::cout << *(arr+i) << " ";
////		*psum += *(arr + i);
////	}
////	std::cout << std::endl;
////	return *psum;
////}
////
////int main()
////{
////	srand(unsigned(time(NULL)));
////	const int SIZE = 10;
////	int arr[SIZE]{};
////
////	fillarr(arr, &SIZE);
////	std::cout << "sum arr - " << printarr(arr, &SIZE) << std::endl;;
////
////	system("pause");
////	return 0;
////}
//
//
///*2.	Äàíî îäíîâèì³ðíèé ìàñèâ. Çíàéòè íàéá³ëüøå òà íàéìåíøå çíà÷åííÿ ó ìàñèâ³ òà ïîì³íÿòè ¿õ ó ìàñèâ³ ì³ñöÿìè. Âèâåñòè ïåðåòâîðåíèé ìàñèâ íà åêðàí ç âèêîðèñòàííÿì âêàç³âíèê³â.*/
//
////#include <iostream>
////#include<ctime>
////void fillArr(int arr[], const int *SIZE)
////{
////	for (short i = 0; i < *SIZE; i++)
////	{
////		*(arr + i) = rand() % 1000 + 1;
////	}
////}
////
////void opArr(int arr[], const int *SIZE)
////{
////	int bufMin = 1000000, bufMax = 0, indMax = 0, indMin = 0, buf = 0;
////
////	for (short i = 0; i < *SIZE; i++)
////	{
////		if (*(arr + i) < bufMin)
////		{
////			bufMin = *(arr + i);
////			indMin = i;
////		}
////		if (*(arr + i) > bufMax)
////		{
////			bufMax = *(arr + i);
////			indMax = i;
////		}
////	}
////	std::cout << "min " << bufMin << "\n max " << bufMax << std::endl;
////	buf = *(arr + indMin);
////	*(arr + indMin)=*(arr + indMax);
////	*(arr + indMax)= buf;
////}
////
////void printArr(int arr[], const int *SIZE)
////{
////	for (short i = 0; i < *SIZE; i++)
////	{
////		std::cout << *(arr + i) << " ";
////	}
////	std::cout << std::endl;
////
////}
////
////int main()
////{
////	srand(unsigned(time(NULL)));
////	const int SIZE = 10;
////	int arr[SIZE]{};
////
////	fillArr(arr, &SIZE);
////	printArr(arr, &SIZE);
////	opArr(arr, &SIZE);
////	printArr(arr, &SIZE);
////	
////	system("pause");
////	return 0;
////}
//
///*3.	Äàíî îäíîâèì³ðíèé ìàñèâ. Ïîì³íÿòè ì³ñöÿìè äâ³ éîãî ïîëîâèíè(ÿêùî ìàñèâ ìàº íåïàðíó äîâæèíó, òî öåíòðàëüíèé åëåìåíò çàëèøàºòüñÿ íà ì³ñö³ ç âèêîðèñòàííÿì âêàç³âíèê³â*/
//
//#include <iostream>
//#include<ctime>
//void fillArr(int arr[], const int *SIZE)
//{
//	for (short i = 0; i < *SIZE; i++)
//	{
//		*(arr + i) = rand() % 1000 + 1;
//	}
//}
//
//void opArr(int arr[], const int *SIZE)
//{
//	//const int SIZEE = *SIZE;/*íå ðîáèò:(*/
//	//int arrbuf[SIZEE]; /*íå ðîáèò:((íå òàê òî ïðîñòî îáìàíóòü êîìï³ëÿòîð*/
//	//int arrbuf[*SIZE]{}; /*³ òàê òîæå:(((*/
//	int arrbuf[11]{};
//	int iterator = 0;
//	if (*SIZE % 2 == 0)
//	{
//		for (short i = *SIZE / 2; i < *SIZE; i++)
//		{
//			*(arrbuf + iterator) = *(arr + i);
//			iterator++;
//		}
//		for (short i = 0; i < *SIZE / 2; i++)
//		{
//			*(arrbuf + iterator) = *(arr + i);
//			iterator++;
//		}
//	}
//	else
//	{
//		for (short i = (*SIZE / 2) + 1; i < *SIZE; i++)
//		{
//
//			*(arrbuf + iterator) = *(arr + i);
//			iterator++;
//		}
//		*(arrbuf + iterator) = *(arr + (*SIZE / 2));
//		iterator++;
//		for (short i = 0; i < *SIZE / 2; i++)
//		{
//			*(arrbuf + iterator) = *(arr + i);
//			iterator++;
//		}
//
//
//	}
//	for (short i = 0; i < *SIZE; i++)
//	{
//		std::cout << *(arrbuf + i) << " ";
//	}
//	std::cout << std::endl;
//}
//
//void printArr(int arr[], const int *SIZE)
//{
//	for (short i = 0; i < *SIZE; i++)
//	{
//		std::cout << *(arr + i) << " ";
//	}
//	std::cout << std::endl;
//
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int SIZE = 11;
//	int arr[SIZE]{};
//
//	fillArr(arr, &SIZE);
//	printArr(arr, &SIZE);
//	opArr(arr, &SIZE);
//	//printArr(arr, &SIZE);
//
//	system("pause");
//	return 0;
//}
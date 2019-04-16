//Написати програму, яка реалізує телефонну книгу
//з вказаною користувачем кількістю абонентів і всіма необхідними функціями.Використати вкладені структури(для адреси чи ПІБ).
#include <iostream>
#include <string>

using namespace std;

struct booknum
{
private:
	string name;
	string adres;
	string telnumb;
public:
	void setName(string newname)
	{
		name = newname;
	}
	void setAdres(string newAdres)
	{
		adres = newAdres;
	}
	void setTelnum(string newTelnum)
	{
		name = newTelnum;
	}
	string getName()
	{
		return name;
	}
	string getAdres()
	{
		return adres;
	}
	string getTelnum()
	{
		return name;
	}
};
int main()
{
	unsigned int sizeBook = 0;
	char varTmp;
	string tmp;
	cout << "Enter Size your book = ";
	cin >> sizeBook;
	booknum *structArr = new booknum[sizeBook];
	for (unsigned short i = 0; i < sizeBook; i++)
	{
	
		cout << "Write new people in your numbook\n";
		cout << "Enter name = ";
		cin >> tmp;
		structArr[i].setName(tmp);
		cout << endl << "Enter Adres = ";
		cin >> tmp;
		structArr[i].setAdres(tmp);
		cout << endl << "Enter Telephone number = ";
		cin >> tmp;
		structArr[i].setTelnum(tmp);
	}
	for (unsigned short i = 0; i < sizeBook; i++)
	{
		if (empty(structArr[i].getName()))
		{
			break;
		}
		cout << structArr[i].getName() << endl;
		cout << structArr[i].getAdres() << endl;
		cout << structArr[i].getTelnum() << endl;
		cout << "=================================" << endl;
	}
	system("pause");
	delete[] structArr;
	return 0;
}
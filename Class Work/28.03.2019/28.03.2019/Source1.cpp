#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct Player {
	string name;
	string surname;
	unsigned short age;
	string position;
	int price;
	void ShowPerson() {
		cout << "===========================>>>>>>>>" << endl;
		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << "\nPosition: " << position<< "\nPrice: " << price << endl;
	}
};

struct Team {
	string country;
	string city;
	string name;
	string coach;
	unsigned int wins;
	unsigned int draws;
	unsigned int Loses;
	unsigned short teamSize;
	void ShowTeamInfo() {
		cout << "Country: " << country << "\nCity: " << city << "\nName: " << name << "\nCoach" << coach << "\nWins " << wins << "\nDraws " << draws << "Loses " << Loses << endl;
	}
	Player *player = new Player[2];
};

void FillPlayer(Player *player, const int teamSize) {
	cout << "===========================>>>>>>>>" << endl;
	for (int i = 0; i < teamSize; i++) {
		player[i].ShowPerson();
		cout << "Enter player name: ";
		cin >> player[i].name;
		cout << "Enter player surname: ";
		cin >> player[i].surname;
		cout << "Enter player age: ";
		cin >> player[i].age;
		cout << "Enter player position: ";
		cin >> player[i].position;
		cout << "Enter player price: ";
		cin >> player[i].price;

		player[i].ShowPerson();
	}
	cout << "===========================>>>>>>>>" << endl;
}

int main() {

	Team Karpatu;
	Karpatu.country = "Ukraine";
	Karpatu.name = "Karpaty";
	Karpatu.city = "Lviv";
	Karpatu.coach = "Trapatoni";
	Karpatu.wins = 43;
	Karpatu.draws = 3;
	Karpatu.Loses = 12;
	Karpatu.teamSize = 4;
	Karpatu.ShowTeamInfo();
	
	Karpatu.player[0].name = "Robert";
	Karpatu.player[0].surname = "Robertson";
	Karpatu.player[0].position = "Halfback";
	Karpatu.player[0].age = 32;
	Karpatu.player[0].price = 10000;
	Karpatu.ShowTeamInfo();

	Karpatu.player[1].name = "Cristiano";
	Karpatu.player[1].surname = "Ronaldo";
	Karpatu.player[1].position = "Halfback";
	Karpatu.player[1].age = 32;
	Karpatu.player[1].price = 10000;
	Karpatu.ShowTeamInfo();
	cout << "============================" << endl;
	cout << "============================" << endl;
  	Karpatu.ShowTeamInfo();
	Karpatu.ShowTeamInfo();
	//int teamSize = 0;
	//cout << "Enter team size: " << endl;
	//cin >> teamSize;

	//Player *player = new Player[teamSize];
	//FillPlayer(player, teamSize);

	//delete [] player;
	system("pause");
	return 0;

}
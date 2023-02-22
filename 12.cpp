#include <iostream>
#include <string>

using namespace std;

struct Person
{
	int age;
	string male;
	string education;
	string answer;
};

int maleCount_40   = 0;
int femaleCount_39 = 0;
int maleCount_25   = 0;

void getData(Person person) {
	int age_e = (int)person.age;

	if (person.male != "m" || person.male != "w") {
		cout << "Error male " << person.male << " not valid\n";
		exit;
	}
	else {
		if (person.male == "M") {
			if (age_e >= 40 and person.education == "university" and person.answer == "y")
				maleCount_40 += 1;
			if (age_e <= 25 and person.education == "school" and person.answer == "y")
				maleCount_25 += 1;
		}

		if (age_e <= 30 and person.education == "middle" and person.answer == "n" and person.male == "W") {
			cout << "ok";
		}
	}
		
	
}

void main(){
	//Person person1{18, "u", "school", "y"};
	//getData(person1);
	string breaked = "";

	while (1) {
		cout << "Break? (y/n)\n";
		cin >> breaked;
		if (breaked == "y") break;

		Person person;

		cout << "Age (int): ";
		cin >> person.age;
		cout << "Male (m/w): ";
		cin >> person.male;
		cout << "Education (university/middle/school): ";
		cin >> person.education;
		cout << "Answer (y/n): ";
		cin >> person.answer;

		getData(person);
	}
}

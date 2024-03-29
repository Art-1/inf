#include <iostream>
#include <string>

using namespace std;

struct Person
{
	int age;
	string name;
	string surname;
	string male;
	string education;
	string answer;
};

int maleCount_40 = 0;
int femaleCount_30 = 0;
int maleCount_25 = 0;

void printData(int maleCount_40, int femaleCount_30, int maleCount_25) {
	cout << "Мужчин, старше 40 лет, имеющих высшее образование и ответивших да: " << maleCount_40 << "\n";
	cout << "Женщин, моложе 30 лет, имеющих среднее образование и ответивших нет: " << femaleCount_30 << "\n";
	cout << "Мужчин, моложе 25 лет, имеющих начальное образование и ответивших да: " << maleCount_25 << "\n";
}

void printPerson(Person person) {
	cout << "\nИмя: " << person.name << endl;
	cout << "Фамилия: " << person.surname << endl;
	cout << "Пол: " << person.male << endl;
	cout << "Возраст: " << person.age << endl;
	cout << "Образование: " << person.education << endl;
	cout << "Ответ на вопрос: " << person.answer << endl;
}

void getData(Person person) {
	int age_e = (int)person.age;

	if (person.male != "m" and person.male != "w") {
		cout << "\n\nError male " << person.male << " not valid\n\n";
		exit;
	}

	if (age_e < 0) {
		cout << "\n\nError age " << person.male << " not valid\n\n";
		exit;
	}

	else {
		if (person.male == "m") {
			if (age_e >= 40 and person.education == "university" and person.answer == "y")
				maleCount_40 += 1;
			if (age_e <= 25 and person.education == "school" and person.answer == "y")
				maleCount_25 += 1;
		}

		if (age_e <= 30 and person.education == "middle" and person.answer == "n" and person.male == "w") {
			femaleCount_30 += 1;
		}
	}

	printData(maleCount_40, femaleCount_30, maleCount_25);


}

int main() {
	//Person person1{18, "u", "school", "y"};
	//getData(person1);
	string breaked = "";
	setlocale(LC_ALL, "Russian");

	while (1) {
		Person person;

		cout << "Name (string): ";
		cin >> person.name;
		cout << "Surname (string): ";
		cin >> person.surname;
		cout << "Age (int): ";
		cin >> person.age;
		cout << "Male (m/w): ";
		cin >> person.male;
		cout << "Education (university/middle/school): ";
		cin >> person.education;
		cout << "Answer (y/n): ";
		cin >> person.answer;

		printPerson(person);


		cout << "Break? (y/n)\n";
		cin >> breaked;

		if (breaked == "y") {
			getData(person);
			break;
		}
	}
}

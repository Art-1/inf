#include <iostream>
#include "cstring"
using namespace std;

const int N = 3;
string names[4]{ "First name: \n", "Surname: \n", "Zodiak: \n", "Date of birth: \n" };


struct Znak
{
	static const int SZ = 256;
	char FirstName[SZ];
	char LastName[SZ];
	char Zodiak[SZ];
	int DR[3];
}  A[N];

void get_value(int i) {
	cout << "\n\nWritten: \n";
	cout << names[0];
	cout << A[i].FirstName << endl;
	cout << names[1];
	cout << A[i].LastName << endl;
	cout << names[2];
	cout << A[i].Zodiak << endl;
	cout << names[3];
	for (int j = 0; j < 3; j++) {
		cout << A[i].DR[j] << ".";
	}
	cout << "\n\n";
}


void set_value() {
	for (int i = 0; i < N; i++) {
		cout << names[0];
		cin >> A[i].FirstName;
		cout << names[1];
		cin >> A[i].LastName;
		cout << names[2];
		cin >> A[i].Zodiak;
		cout << names[3];
		for (int j = 0; j < 3; j++) cin >> A[i].DR[j];

		get_value(i);

	}
}

int main()
{
	set_value();

	char zd;
	cout << names[2];
	cin >> zd;
	int count = 0;


	cout << "\n\nResult: \n";
	for (int i = 0; i < N; i++) {
		if (A[i].Zodiak[0] == zd) get_value(i);
	}




	return 0;
}

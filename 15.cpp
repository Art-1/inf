#include <iostream>
#include <cmath>

using namespace std;

int gcn(int x) {
  for (int i = 2; i <= (int) sqrt(x); i++) {
    if (x % i == 0)  return 0;
  }
  return 1;
}

int main() {
	/*
	for (int i = 0; i < 20; i++) {
		cout << gcn(i) << " " << i << "|";
	}
	*/
	
	int n;
	cin >> n;
	int a[n];
	int a1[n], a2[n];
	int count1 = 0, count2 = 0;
	
	cout << "Main array:\n";
	for (int i = 0; i < n; i++ ) {
		a[i] = i;
		cout << a[i] << " ";
	}
	cout <<endl;
	for (int i = 0; i < n; i++ ) {
		if (gcn(i) == 1 && i != 1) {
			a1[count1] = a[i];
			count1++;
		}
		else {
			a2[count2] = a[i];
			count2++;
		}
	}
	cout <<endl;
	cout << "2 array:\n";
	for (int i = 0; i < count1; i++) cout << a1[i] << " ";
	cout <<endl;
	cout << "3 array:\n";
	for (int i = 0; i < count2; i++) cout << a2[i] << " ";
	
}

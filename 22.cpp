#include <iostream>
#include <stdlib.h> 

// 22

using namespace std;

int main () {
	int len;
	int count = 0;
	cin >> len;
	int arr[len];
	int arr1[len];
	
	for (int i = 0; i < len; i++) {
		int value = rand()%(2);
		if (value) arr[i] = rand()%10;
		else arr[i] = -(rand()%10);
		cout << arr[i] << " ";
		
		/*int value;
		cin >> value;
		arr[i] = value;*/
	}
	
	for (int i = 0; i < len; i++) {
		if (arr[i] > 0) {
			arr1[count] = arr[i];
			count++;
		}
	}
	cout << endl;
	for (int i = 0; i < count; i++) cout << arr1[i] << " ";
	
}

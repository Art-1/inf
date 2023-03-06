#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>

using namespace std;

int gcd(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
    	if (x % i == 0) {
    		return 0;
		}
	}
	
	return 1;
}

int* generateArr(int n) {
	int* arr = new int[n];
	for (int i = 1; i <= n; i++)
		arr[i] = i;
	return arr;
}

void printArr(int arr[], int n) {
	cout << "\n { ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	cout << "} \n";
}

int main() {
    int n;
    cout << "Length: \n";
    cin >> n;
    
    int arr1[] = {}, arr2[] = {};
    int (*arr) = generateArr(n);
    
    printArr(arr, n);
    
    for (int i=0; i < n; i++) {
    	if (gcd(i) == 1)
    		arr1[i] = arr[i];
    	else
    		arr2[i] = arr[i];
	}

    return 0;
}
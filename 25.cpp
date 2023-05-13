#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <cmath>

using namespace std;

int main() {
    srand(time(NULL));

    int n;
    const int m = 3;
    int d;
    int d_max = 0;
    
    cout << "Enter n: \n";
    cin >> n;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            arr[i][j] = rand() % 10 + 1; 
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n-1; i++) {
    	for (int j = 0; j < i+1; j++) {
    		int a1 = (arr[i][0] - arr[i+1][0]);
    		int a2 = (arr[i][1] - arr[i+1][1]);
    		int a3 = (arr[i][2] - arr[i+1][2]);
    		d = sqrt(a1*a1 + a2*a2 + a3*a3);
    		cout << "\n" << a1*a1 << " " << a2*a2 << " " << a3*a3 << " " << d << "\n";
    		
    		if (d > d_max) d_max = d;
		}
	}
	cout << "Max lenght: " << d_max;

    return 0;
}
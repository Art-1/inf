#include <iostream>
#include <cmath>

using namespace std;

int gcn(int x) {
  for (int i = 2; i <= (int) sqrt(x); i++)
    if (x % i == 0)  return 0;
  return 1;
}

int main() {

  int n;
  cout << "Length: ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }
  
  cout << "main array" << endl;
  for (int i = 0;i < n; i ++) cout << arr[i] << " ";
  cout << endl;
  
  int prime_arr[n/2 + 1]; 
  int other_arr[n/2 + 1]; 
  int prime_count = 0; 
  int other_count = 0; 
  
    for (int i = 0; i < n; i++) {
    if (gcn(i)) {
      prime_arr[prime_count] = arr[i];
      prime_count++;
    } else {
      other_arr[other_count] = arr[i];
      other_count++;
    }
  }

  cout << endl;
  cout << "2 array " << endl;
  for (int i = 0; i < prime_count; i++) {
    cout << prime_arr[i] << " ";
  }
  cout << endl;
  cout << endl;

  cout << "3 array ";
  cout << endl;
  for (int i = 0; i < other_count; i++) {
    cout << other_arr[i] << " ";
  }
  cout << endl;

  return 0;
}

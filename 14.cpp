#include <iostream>

using namespace std;

int main(){
	int A1, A2, B1, B2, P = 0, b;
	int N;
	cout << "A1: \n";
	cin >> A1;
	cout << "A2: \n";
	cin >> A2;
	cout << "N: \n";
	cin >> N;
	cout << "b: \n";
	cin >> b;
	
	for(int i = 0; i < N; i++) {
		B1 = rand()%10 + 1;
		B2 = rand()%10 + 1;
		
		/*cout << "B1: \n";
		cin >> B1;
		cout << "B2: \n";
		cin >> B2;*/
		
		if ((B1 < (A1-b) & B1 > (A1+b)) & (B2 < (A2-b) & B2 > (A2+b))) P++;
	}
	
	if (P>0) cout << "P: " << P;
	else cout << "\n-1";
	
}
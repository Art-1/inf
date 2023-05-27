#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int N, m;
    cout << "N: ";
    cin >> N;

    ofstream fout("data.txt");

    for (int i = 0; i < N; i++) {
        int num;
        // cin >> num;
        num = rand() % 100;
        fout << num << " ";
    }

    fout.close();

    ifstream fin("data.txt");

    ofstream fout2("data2.txt");

    cout << "m: ";
    cin >> m;
    cout << "data.txt: ";
    int num;
    while (fin >> num) {
        cout << num << " ";
        if (num % m == 0) {
            fout2 << num << " ";
        }
    }

    fin.close();
    fout2.close();
    cout << endl;


    ifstream fin2("data2.txt");
    cout << "data2.txt: ";
    while (fin2 >> num) {
        cout << num << " ";
    }
    cout << endl;

    fin2.close();

    return 0;
}

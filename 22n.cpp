#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int N, m;
    cout << "Enter the number of elements to write: ";
    cin >> N;

    // Open file for writing
    ofstream fout("data.txt");

    // Write N random numbers to file
    for (int i = 0; i < N; i++) {
        int num = rand() % 100;
        fout << num << " ";
    }

    // Close file
    fout.close();

    // Open file for reading
    ifstream fin("data.txt");

    // Open file for writing
    ofstream fout2("data2.txt");

    // Read numbers from first file and write to second file if they are divisible by m
    cout << "Enter a number to check divisibility: ";
    cin >> m;
    int num;
    while (fin >> num) {
        if (num % m == 0) {
            fout2 << num << " ";
        }
    }

    // Close files
    fin.close();
    fout2.close();

    // Open second file for reading and print contents to console
    ifstream fin2("data2.txt");
    cout << "Numbers divisible by " << m << ": ";
    while (fin2 >> num) {
        cout << num << " ";
    }
    cout << endl;

    // Close second file
    fin2.close();

    return 0;
}
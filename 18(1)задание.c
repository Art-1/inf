#include <iostream>
#include <conio.h>

using namespace std;

int gcd(int x, int y)
{
    return y ? gcd(y, x % y) : x;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int m, n;
    cin >> m >> n;
    if (gcd(m, n) == 1)
        cout << "Взаимно простые";
    else
        cout << "Не взаимно простые";

    return 0;
}

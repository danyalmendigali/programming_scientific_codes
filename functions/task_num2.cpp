#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

double power(double n, int p = 2);


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, p;
    cout << "Введите первое число(Какое число возвести в степень): ";
    cin >> n;

    cout << "Введите второго число(В какую степень возвести число): ";
    cin >> p;

    cout << power(n, p);

  return 0;
}

double power(double n, int p)
{
    int total;
    total = pow(n, p);

    return total;
}




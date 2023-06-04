#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int zeroSmaller(int& a, int& b);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dd1, dd2;
    cout << "Введите первое число: ";
    cin >> dd1;
    cout << "Введите второе число: ";
    cin >> dd2;

    cout << zeroSmaller(dd1, dd2);


  return 0;
}


int zeroSmaller(int& a, int& b)
{
    if(a > b) {
        b = 0;
        cout << "Второе число меньше первого теперь его значение равно: ";
        return b;
    }
    else {
        a = 0;
        cout << "Первое число меньше второго теперь его значение равно: ";
        return a;
    }
}



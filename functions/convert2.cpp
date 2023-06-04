#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

float lbstokg(float); // прототип функции

// демонстрирует механизм возврата значения функцией

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lbs, kgs;
    cout << "Введите вес в фунтах: ";
    cin >> lbs;
    kgs = lbstokg(lbs);
    cout << "Вес в киллограмах равен " << kgs << endl;


  return 0;
}

float lbstokg(float pounds) // переводит фунты в килограммы
{
     return 0.453592 * pounds;
}


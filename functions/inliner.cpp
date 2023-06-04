#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// применение встроенных функций

inline float lbstokg(float pounds) // функция lbstokg() переводит фунты в килограммы
{
     return 0.453592 * pounds;
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lbs;
    cout << "Введите вес в фунтах: ";
    cin >> lbs;
    kgs = lbstokg(lbs);
    cout << "Вес в киллограмах равен " << kgs << endl;


  return 0;
}





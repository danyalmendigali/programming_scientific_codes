#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// определение среднего дневного объема продаж

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int SIZE = 6;
    double sales[SIZE];
    cout << "Введите объем продаж на каждый из шести дней\n";
    FOR(i, 0, SIZE) {
        cin >> sales[i];
    }
    double total = 0;
    FOR(i, 0, SIZE) {
        total += sales[i];
    }

    double average = total / SIZE;
    cout << "Средний объем: " << average << endl;






  return 0;
}


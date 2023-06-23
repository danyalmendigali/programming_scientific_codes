#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример перегрузки функции с разным числом параметров:

void sum(int a, int b) {
    int result = a + b;
    cout << "Сумма двух чисел: " << result << endl;
}

void sum(int a, int b, int c) {
    int result = a + b + c;
    cout << "Сумма трех чисел: " << result << endl;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    sum(2, 3);
    sum(1, 2, 3);



   return 0;
}



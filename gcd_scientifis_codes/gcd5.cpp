#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(long i = a; i > b; i--)

// Считается, что рекурсивные алгоритмы менее эффективны, чем итерационные, за счёт накладных расходов на вызов функции

long gcd5(long a, long b);

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите первое число: ";
    long a, b;
    cin >> a;
    cout << "Ввдедите второе число: ";
    cin >> b;
    cout << "Наибольший общий делитель: " << gcd5(a, b);




   return 0;
}


long gcd5(long a, long b) // Алгоритм Евклида (итерационный)
{
    while(a != b)
    {
        if(a > b)
        {
            long tmp = a;
            a = b;
            b = tmp;
        }
        b = b - a;
    }

    return a;
}



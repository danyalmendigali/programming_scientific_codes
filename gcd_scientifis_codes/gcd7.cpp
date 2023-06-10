#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(long i = a; i > b; i--)

// Считается, что рекурсивные алгоритмы менее эффективны, чем итерационные, за счёт накладных расходов на вызов функции

long gcd7(long a, long b);

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите первое число: ";
    long a, b;
    cin >> a;
    cout << "Ввдедите второе число: ";
    cin >> b;
    cout << "Наибольший общий делитель: " << gcd7(a, b);




   return 0;
}


long gcd7(long a, long b) // Бинарный алгоритм (итерационный)
{
    long nod = 1;
    long tmp;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a == 1 || b == 1)
        return 1;
    while (a != 0 && b != 0) {
        if (((a & 1) | (b & 1)) == 0) {
            nod <<= 1;
            a >>= 1;
            b >>= 1;
            continue;
        }
        if (((a & 1) == 0) && (b & 1)) {
            a >>= 1;
            continue;
        }
        if ((a & 1) && ((b & 1) == 0)) {
            b >>= 1;
            continue;
        }
        if (a > b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        tmp = a;
        a = (b - a) >> 1;
        b = tmp;
    }
    if (a == 0)
        return nod * b;
    else
        return nod * a;
}




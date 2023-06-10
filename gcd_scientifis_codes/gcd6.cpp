#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(long i = a; i > b; i--)

// НОД(0, n) = n; НОД(m, 0) = m; НОД(m, m) = m;
// НОД(1, n) = 1; НОД(m, 1) = 1;
// Если m, n чётные, то НОД(m, n) = 2*НОД(m/2, n/2);
// Если m чётное, n нечётное, то НОД(m, n) = НОД(m/2, n);
// Если n чётное, m нечётное, то НОД(m, n) = НОД(m, n/2);
// Если m, n нечётные и n > m, то НОД(m, n) = НОД((n-m)/2, m);
// Если m, n нечётные и n < m, то НОД(m, n) = НОД((m-n)/2, n);

long gcd06(long a, long b);

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите первое число: ";
    long a, b;
    cin >> a;
    cout << "Ввдедите второе число: ";
    cin >> b;
    cout << "Наибольший общий делитель: " << gcd06(a, b);




   return 0;
}


long gcd06(long a, long b) // Бинарный алгоритм (рекурсивный)
{
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a == 1 || b == 1) return 1;
    if (a % 2 == 0 && b % 2 == 0) return 2 * gcd06(a / 2, b / 2);
    if (a % 2 == 0L && b % 2 != 0) return gcd06(a / 2, b);
    if (a % 2 != 0 && b % 2 == 0) return gcd06(a, b / 2);
    if (a < b) return gcd06((b - a) / 2, a);
    else return gcd06((a - b) / 2, b);
}




#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(long i = a; i > b; i--)

// В самом простом случае алгоритм Евклида применяется к паре положительных целых чисел и формирует новую пару, которая
// состоит из меньшего числа и разницы между большим и меньшим числом. Процесс повторяется, пока числа не станут равными

long gcd4(long a, long b);

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите первое число: ";
    long a, b;
    cin >> a;
    cout << "Ввдедите второе число: ";
    cin >> b;
    cout << "Наибольший общий делитель: " << gcd4(a, b);




   return 0;
}


long gcd4(long a, long b)
{
    if(a == b)
    {
        return a;
    }

    if(a > b)
    {
        long tmp = a;
        a = b;
        b = tmp;
    }

    return gcd4(a, b - a);
}


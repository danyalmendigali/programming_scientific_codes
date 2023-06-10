#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(long i = a; i > b; i--)

// Идея алгоритма очень проста: гоним переменную цикла от первого числа до 1. Если оба числа делятся на переменную цикла без остатка,
// значит переменная цикла и равна НОД

long gcd03(long a, long b);

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите первое число: ";
    long a, b;
    cin >> a;
    cout << "Ввдедите второе число: ";
    cin >> b;
    cout << "Наибольший общий делитель: " << gcd03(a, b);




   return 0;
}

long gcd03(long a, long b)
{
    long nod = 1;

    if(a > b)
    {
        long tmp = a;
        a = b;
        b = tmp;
    }

    while(a > 1 && b > 1)
    {
        for(long i = 2; i <= a; i++)
        {
            if(a % i == 0 && b % i == 0)
            {
                nod *= i;
                a /= i;
                b /= i;
                break;
            }
            if(a % i == 0)
            {
                a /= i;
                break;
            }
            if(b % i == 0)
            {
                b /= i;
                break;
            }
        }
    }

    return nod;
}


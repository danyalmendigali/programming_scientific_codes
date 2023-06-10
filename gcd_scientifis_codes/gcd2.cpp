
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(long i = a; i > b; i--)

// Просто добавляем простейшую функцию для вычисления минимального числа для пары чисел и инициализируем переменную цикла меньшим из двух чисел
long min(long a, long b);
long gcd2(long a, long b);

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите первое число: ";
    long a, b;
    cin >> a;
    cout << "Ввдедите второе число: ";
    cin >> b;
    cout << "Наибольший общий делитель: " << gcd2(a, b);




   return 0;
}

long min(long a, long b)
{
    return a > b ? b : a;
}

long gcd2(long a, long b)
{
    long nod = 1;
    FOR(i, min(a, b), 0)
    {
        if(a % i == 0 && b % i == 0) {
            nod = i;
            break;
        }
    }

    return nod;
}

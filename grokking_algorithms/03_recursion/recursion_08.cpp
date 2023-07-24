#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Рекурсивная функция для нахождения наибольшего общего делителя (НОД)
// двух положительных целых чисел a и b.

int gcd(int a, int b)
{
    if(b == 0)
    {
        // Базовый случай: если b равно 0, то НОД равен a.
        return a;
    }
    else
    {
        // Рекурсивный случай: вычисляем НОД для чисел b и a % b.
        // В данном случае a % b представляет собой остаток от деления a на b.
        return gcd(b, a % b);
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    int result = gcd(a, b);
    cout << "Наибольший общий делитель(НОД) двух чисел " << a << " и " << b << " равен: ";
    cout << result << "\n";



    return 0;
}


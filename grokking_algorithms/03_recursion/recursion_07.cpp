#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Рекурсивная функция для возведения числа в степень.
// Принимает два аргумента:
// base - число, которое нужно возвести в степень.
// exponent - показатель степени.

int power(int base, int exponent)
{
    // Базовый случай: если показатель степени равен 0, то возвращаем 1.
    if(exponent == 0)
    {
        return 1;
    }
    else
    {
        // Рекурсивный случай: умножаем base на результат возведения base в степень (exponent - 1).
        // Таким образом, каждый раз уменьшаем показатель степени на 1, пока не достигнем базового случая.
        return base * power(base, exponent - 1);
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int base = 4; // Задаем число, которое нужно возвести в степень (в данном случае 2).
    int exponent = 10; // Задаем показатель степени (в данном случае 10).
    int result = power(base, exponent); // Вызываем функцию power для возведения числа base в степень exponent.

    // Выводим результат на экран.
    cout << base << " в степени " << exponent << " равно: " << result << "\n";

    return 0;
}

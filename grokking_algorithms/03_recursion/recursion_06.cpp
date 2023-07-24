#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Рекурсивная функция для вычисления чисел Фибоначчи.
// Принимает аргумент n - номер числа Фибоначчи, которое нужно вычислить.

int fibonacci(int n)
{
    // Базовый случай: если n меньше или равно 1, то возвращаем само значение n.
    if(n <= 1)
    {
        return n;
    }
    else
    {
        // Рекурсивный случай: вычисляем числа Фибоначчи для n-1 и n-2,
        // а затем складываем результаты и возвращаем их сумму.
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num = 4; // Задаем номер числа Фибоначчи, которое хотим вычислить (в данном случае 4).
    int result = fibonacci(num); // Вызываем функцию fibonacci для вычисления числа Фибоначчи.

    // Выводим результат на экран.
    cout << "Число Фибоначчи с номером " << num << " равно: " << result << endl;

    return 0;
}

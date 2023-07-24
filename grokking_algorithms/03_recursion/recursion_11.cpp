#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Функция для быстрого возведения числа в степень
double fastPower(double a, int n) {
    // Если степень равна 0, возвращаем 1.0 (любое число в степени 0 равно 1)
    if (n == 0) {
        return 1;
    }
    // Если степень четная
    else if (n % 2 == 0) {
        // Вычисляем a^(n/2) рекурсивно
        double temp = fastPower(a, n / 2);
        // Возвращаем результат a^(n/2) * a^(n/2)
        return temp * temp;
    }
    // Если степень нечетная
    else {
        // Вычисляем a^(n-1) рекурсивно
        return a * fastPower(a, n - 1);
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a;
    int n;

    cout << "Введите действительное число а: ";
    cin >> a;

    cout << "Введите целое неотрицательное число: ";
    cin >> n;

    double result = fastPower(a, n);
    cout << "Результат: " << result << endl;

    return 0;
}

#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

double power(double n, int p = 2)
{
    double result = 1.0;
    for(int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}



double power(char n, int p = 2)
{
    return power(static_cast<double>(n), p);
}



double power(int n, int p = 2)
{
    return power(static_cast<double>(n), p);
}



double power(long n, int p = 2)
{
    return power(static_cast<double>(n), p);
}


double power(float n, int p = 2)
{
    return power(static_cast<double>(n), p);
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    double n;
    int p;

    cout << "Введите число: ";
    cin >> n;

    cout << "Введите показатель степени: ";
    cin >> p;

    double result = power(n, p);
    cout << "Результат: " << result << endl;

    char c;
    cout << "Введите символ: ";
    cin >> c;
    result = power(c);
    cout << "Результат: " << result << endl;


    int i;
    cout << "Введети целое число: ";
    cin >> i;

    result = power(i);
    cout << "Результат: " << result << endl;

    long l;
    cout << "Введите длинное целое число: ";
    cin >> l;
    result = power(l);
    cout << "Результат: " << result << endl;

    float f;
    cout << "Введите число типа float: ";
    cin >> f;

    result = power(f);
    cout << "Результат: " << result << endl;







    return 0;
}

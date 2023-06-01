#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

struct Distance
{
    int feet;
    float inches;
};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Distance d1, d3; // определения двух переменных
    Distance d2 = { 11, 6.25 }; // определение с инициализацией


     // ввод полей переменной d1
    cout << "Введите число футов: ";
    cin >> d1.feet;
    cout << "Введите число дюймов: ";
    cin >> d1.inches;

     // сложение длин d1 и d2 и присвоение результата d3
    d3.inches = d1.inches + d2.inches; // сложение дюймов
    d3.feet = 0;

    if(d3.inches >= 12.0) // если сумма больше 12.0,
    {
        d3.inches -= 12.0; // то уменьшаем число дюймов на 12.0 и увеличиваем число футов на 1
        d3.feet++;
    }

    d3.feet += d1.feet + d2.feet; // сложение футов

     // вывод всех длин на экран
    cout << d1.feet << "\'-" << d1.inches << "\" +";
    cout << d2.feet << "\'-" << d2.inches << "\" = ";
    cout << d3.feet << "\'-" << d3.inches << "\"\n";





   return 0;
}


#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// применение ссылочного механизма передачи аргументов

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    void intfrac(float, float&, float&);
    float number, intpart, fracpart;
    do {
        cout << "Введите вещественное число: ";
        cin >> number; // ввод числа пользователем
        intfrac(number, intpart, fracpart); // нахождение целой и дробной части
        cout << "Целая часть равна " << intpart << ", дробная часть равна " << fracpart << endl;
    }
    while(number != 0.0); // выход из цикла, если введен ноль



  return 0;
}

void intfrac(float n, float& intp, float& fracp)
{
    long temp = static_cast<long>(n); // преобразование к типу long
    intp = static_cast<float>(temp); // и обратно во float
    fracp = n - intp; // вычитаем целую часть
}

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// использование вложенных структур

struct Distance
{
    int feet;
    float inches;
};

struct Room
{
    Distance length;
    Distance width;
};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    Room dining; // переменная dining типа Room
    dining.length.feet = 13;  // задание параметров комнаты
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;

     // преобразование длины и ширины в вещественный формат
    float l = dining.length.feet + dining.length.inches / 12;   // (6,5 / 12) + 13
    float w = dining.width.feet + dining.width.inches / 12;  //  (0 / 12) + 10;

     // вычисление площади комнаты и вывод на экра
    cout << "Площадь комнат равна " << l * w << " квадратных футов\n"; // 135







   return 0;
}



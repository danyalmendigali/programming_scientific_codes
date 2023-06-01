#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

struct part // объявление структуры
{
    int modelnumber; // номер модели изделия
    int partnumber; // номер детали
    float cost; // стоимость детали
};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    part part1 = { 6244, 373, 217.55F }; // инициализация переменной
    part part2; // объявление переменной

      // вывод полей первой переменной
    cout << "Модель " << part1.modelnumber;
    cout << " деталь " << part1.partnumber;
    cout << " стоимость $" << part1.cost << endl;
    part2 = part1; // присваивание структурных переменных


     // вывод полей второй переменной
    cout << "Модель " << part2.modelnumber;
    cout << " деталь " << part2.partnumber;
    cout << " стоимость $" << part2.cost << endl;





   return 0;
}

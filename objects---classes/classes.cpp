#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

struct DateStruct
{
    int day;
    int month;
    int year;
};

void print(DateStruct &date)
{
    cout << date.day << "/" << date.month << "/" << date.year;
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    DateStruct today { 12, 11, 2018 };  // используем uniform-инициализацию

    today.day = 18;  // используем оператор выбора члена для выбора члена структуры(изменили данные)
    print(today);








  return 0;
}


#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

struct DateStruct
{
public:
    int m_day;
    int m_month;
    int m_year;

    void print()
    {
        cout << m_day << "/" << m_month << "/" << m_year;
    }
};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    DateStruct today { 12, 11, 2018 };

    today.m_day = 18; // используем оператор выбора членов для выбора переменной-члена m_day объекта today класса DateClass
    today.print(); // используем оператор выбора членов для вызова метода print() объекта today класса DateClass







  return 0;
}


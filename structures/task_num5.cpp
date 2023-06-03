#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct date
{
   int day;
   int month;
   int year;
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    date date1;
    cout << "Введите год: ";
    cin >> date1.year;

    cout << "Введите месяц: ";
    cin >> date1.month;

    cout << "Введите день: ";
    cin >> date1.day;

    cout << "Дата: " << date1.year << "/" << date1.month << "/" << date1.day << endl;














   return 0;
}





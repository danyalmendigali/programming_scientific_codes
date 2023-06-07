#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class DateClass
{
    int m_day;
    int m_month;
    int m_year;
public:
    void setDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }


    void print()
    {
        cout << m_day << "/" << m_month << "/" << m_year;
    }

};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    DateClass date;
    date.setDate(2, 3, 2015);
    date.print();







  return 0;
}



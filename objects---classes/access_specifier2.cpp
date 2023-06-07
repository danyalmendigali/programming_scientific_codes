#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class DateClass // члены класса являются закрытыми по умолчанию
{
    int m_day; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_month; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_year; // закрыто по умолчанию, доступ имеют только другие члены класса
public:
    void setDate(int day, int month, int year)  // открыто, доступ имеет любой объект
    {
    // Метод setDate() имеет доступ к закрытым членам класса, так как сам является членом класса
        m_day = day;
        m_month = month;
        m_year = year;
    }


    void print()  // открыто, доступ имеет любой объект
    {
        cout << m_day << "/" << m_month << "/" << m_year;
    }

    // Обратить внимание на этот дополнительный метод
    void copyFrom(const DateClass &b)
    {
        // Мы имеем прямой доступ к закрытым членам объекта b
        m_day = b.m_day;
        m_month = b.m_month;
        m_year = b.m_year;
    }

};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    DateClass date;
    date.setDate(2, 3, 2015); // ок, так как setDate() имеет спецификатор доступа public


    DateClass copy;
    copy.copyFrom(date); // ок, так как copyFrom() имеет спецификатор доступа public
    copy.print();







  return 0;
}




#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// счетчик в качестве объекта

class Counter
{
private:
    unsigned int count; // значение счетчика
public:
    Counter(): count(0) {
        cout << "Конструктор\n";
    } // конструктор

    void inc_count()
    {
        count++; // инкрементирование счетчика
    }
    int get_count()
    {
        return count; // получение значения счетчика
    }

};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Counter c1, c2; // определение с инициализацией

    cout << "c1 = " << c1.get_count() << " "; // вывод
    cout << "c2 = " << c2.get_count() << endl; // вывод

    c1.inc_count(); // инкрементирование c1
    c2.inc_count(); // инкрементирование c2
    c2.inc_count(); // инкрементирование c2

    cout << "c1 = " << c1.get_count() << " "; // вывод
    cout << "c2 = " << c2.get_count() << endl; // вывод






  return 0;
}


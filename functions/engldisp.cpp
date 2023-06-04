#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// передача структурных переменных в функцию

struct Distance
{
    int feet;
    int inches;
};

void engldisp(Distance);


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Distance d1, d2;

    cout << "Введите число футов: ";
    cin >> d1.feet;
    cout << "Введите число дюймов: ";
    cin >> d1.inches;

    cout << "Введите число футов: ";
    cin >> d2.feet;
    cout << "Введите число дюймов: ";
    cin >> d2.inches;

    cout << "\nd1 = ";
    engldisp(d1);

    cout << "\nd2 = ";
    engldisp(d2);
    cout << endl;

  return 0;
}


void engldisp(Distance dd) // заголовок функции
{
    cout << dd.feet << "\'-" << dd.inches << "\"";
}







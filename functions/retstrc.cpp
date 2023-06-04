#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// демонстрирует возвращение функцией структурной переменной

struct Distance
{
    int feet;
    int inches;
};

Distance addengl(Distance, Distance);
void engldisp(Distance);



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Distance d1, d2, d3;

    cout << "Введите число футов: ";
    cin >> d1.feet;
    cout << "\nВведите число дюймов: ";
    cin >> d1.inches;

    cout << "\nВведиет число футов: ";
    cin >> d2.feet;
    cout << "\nВведите число дюймов: ";
    cin >> d2.inches;

    d3 = addengl(d1, d2);
    engldisp(d1);
    cout << "+";

    engldisp(d2);
    cout << "=";

    engldisp(d3);
    cout << endl;


  return 0;
}

Distance addengl(Distance dd1, Distance dd2)
{
    Distance dd3;
    dd3.inches = dd1.inches + dd2.inches;
    dd3.feet++;

    if(dd3.inches >= 12.0)
    {
        dd3.inches -= 12.0;
        dd3.feet++;
    }

    dd3.feet += dd1.feet + dd2.feet;
    return dd3;
}

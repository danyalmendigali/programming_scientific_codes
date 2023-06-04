#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

// демонстрирует перегруженные функции

struct Distance
{
    int feet;
    float inches;
};

void engldisp(Distance); // прототипы
void engldisp(float);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Distance d1; // длина типа Distance
    float d2; // длина типа float

    cout << "Введите число футов: ";
    cin >> d1.feet;
    cout << "Введите число дюймов: ";
    cin >> d1.inches;

    cout << "Введите длину в дюймах: ";
    cin >> d2;

    cout << "\nd1 = ";
    engldisp(d1);

    cout << "\nd2 = ";
    engldisp(d2);
    cout << endl;


  return 0;
}

//-------- функция engldisp()----------------
void engldisp(Distance dd) // параметр dd типа Distance
{
    cout << dd.feet << "\'-" << dd.inches << "\"";


}

//--------------------------------------------------------
// engldisp()
// вывод переменной типа float в футах и дюйма
void engldisp(float dd) // параметр dd типа float
{
    int feet = static_cast<int>(dd / 12);
    float inches = dd - feet * 12;
    cout << feet << "\'-" << inches << "\"";
}







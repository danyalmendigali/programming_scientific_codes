#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


// инициализация объектов с помощью копирующего конструктора

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance() : feet(0), inches(0.0) { }

    Distance(int ft, float in) : feet(ft), inches(in) { }

    void getdist() // ввод длины пользователем
     {
        cout << "Введите число футов "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
     }

    void showdist() // вывод длины
     {
        cout << feet << "\'-" << inches << '\"';
     }
};




int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     Distance dist1(11, 6.25); // конструктор с двумя аргументами
     Distance dist2(dist1); // два конструктора с одним аргументом
     Distance dist3 = dist1;

     cout << "dist1 = ";
     dist1.showdist();

     cout << "\ndist2 = ";
     dist2.showdist();

     cout << "\ndist3 = ";
     dist3.showdist();

     cout << endl;









  return 0;
}


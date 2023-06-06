#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

//конструкторы, добавляют объекты с помощью функции-члена


class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) {} // конструктор без аргументов

    Distance(int ft, float in) : feet(ft), inches(in) {} // конструктор с двумя аргументами
    void getdist()  // ввод длины пользователем
    {
        cout << "Введите число футов: ";
        cin >> feet;
        cout << "Введите число дюймов: ";
        cin >> inches;
    }

    void showdist() // вывод длины на экран
    {
        cout << feet << "\'-" << inches << '\"';
    }

    void add_dist(Distance, Distance); // прототип
};

void Distance::add_dist(Distance dd1, Distance dd2)
{
    inches = dd1.inches + dd2.inches; // сложение дюймов
    feet = 0;
    if(inches >= 12.0) // если число дюймов больше 12.0, то уменьшаем число дюймов на 12.0 и увеличиваем число футов на 1
    {
        inches -= 12.0;
        feet++;
    }

    feet += dd1.feet + dd2.feet; // сложение футов
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Distance dist1, dist3; // две длины
    Distance dist2(11, 6.25); // определение и инициализация
    dist1.getdist(); // ввод dist1
    dist3.add_dist(dist1, dist2); // dist3 = dist1 + dist2

    cout << "dist1 = ";
    dist1.showdist();

    cout << "\ndist2 = ";
    dist2.showdist();

    cout << "\ndist3 = ";
    dist3.showdist();





  return 0;
}


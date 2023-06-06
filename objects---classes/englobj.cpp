#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// длины в английской системе в качестве объектов

class Distance // длина в английской системе
{
private:
    int feet;
    float inches;
public:
    void setdist(int ft, float in) // установка значений полей
    {
        feet = ft;
        inches = in;
    }

    void getdist() // ввод полей с клавиатуры
    {
        cout << "Введите число футов: ";
        cin >> feet;
        cout << "Введите число дюймов: ";
        cin >> inches;
    }

    void showdist() // вывод полей на экран

    {
        cout << feet << "\'-" << inches << '\"';
    }

};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Distance dist1, dist2; // две длины
    dist1.setdist(11, 6.25); // установка значений для d1
    dist2.getdist(); // ввод значений для dist2

    // вывод длин на экран

    cout << "\ndist1 = ";
    dist1.showdist();

    cout << "\ndist2 = ";
    dist2.showdist();
    cout << endl;





  return 0;
}

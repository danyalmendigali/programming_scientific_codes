#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// детали изделия в качестве объектов

class part // определение класса
{
private:
    int modelnumber; // номер изделия
    int partnumber; // номер детали
    float cost; // стоимость детали
public:
    void setpart(int mn, int pn, float c)  // установка данных
    {
        modelnumber = mn;
        partnumber = pn;
        cost = c;
    }

    void showpart() // вывод данных
    {
        cout << "Модель " << modelnumber;
        cout << ", деталь " << partnumber;
        cout << ", стоимость $" << cost << endl;
    }
};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    part part1; // определение объекта класса part
    part1.setpart(6244, 373, 217.55F);
    part1.showpart();




  return 0;
}

#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// демонстрирует простой небольшой объект

class smallobj // определение класса
{
private:
    int somedata; // поле класса
public:
    void setdata(int d) // метод класса, изменяющий значение поля
    {
        somedata = d;
    }

    void showdata() // метод класса, отображающий значение поля
    {
        cout << "Значение поля равно " << somedata << endl;
    }
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    smallobj s1, s2; // определение двух объектов класса smallobj
    s1.setdata(1066); // вызовы метода setdata()
    s2.setdata(1776);
    s1.showdata(); // вызовы метода showdata()
    s2.showdata();






  return 0;
}

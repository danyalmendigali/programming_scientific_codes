#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Методы, определенные в одном классе, могут быть вызваны другими методами этого же класса, независимо от их модификатора доступа.

class Human
{
public:
    int age;
    int weight;
    string name;

};

class Point
{
public: // Все что ниже будет относится к public до того момента пока не увидит другой модификатор доступа
    int x;
    void Print()
    {
        cout << "y = " << y << "\nx = " << x << "\nz = " << x << endl;
        PrinY(); // Вызываем метод в этом же классе(своего рода рекурсия)
    }

private:
    int y;
    int z;

    void PrinY() // Доступна только в этом классе
    {
        Print
        cout << y << endl;
        cout << "PrinY()" << endl;
    }
};

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Point a;
    a.Print();



   return 0;
}


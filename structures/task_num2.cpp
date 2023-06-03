#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct point
{
    int pointX1;
    int pointY1;
    int pointX2;
    int pointY2;

};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    point point1;
    cout << "Введите координаты точки p1: ";
    cin >> point1.pointX1 >> point1.pointY1;

    cout << "Введите координаты точки p2: ";
    cin >> point1.pointX2 >> point1.pointY2;

    cout << "Координаты точки p1 + p2 равны " << point1.pointX1 + point1.pointX2 << "." << point1.pointY1 + point1.pointY2 << endl;










   return 0;
}




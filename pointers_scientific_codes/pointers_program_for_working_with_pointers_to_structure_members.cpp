#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на члены структуры:

struct Point
{
    int x;
    int y;
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Point p;
    p.x = 3;
    p.y = 5;

    int Point::*ptr = &Point::x; // Указатель на член структуры

    p.*ptr = 10; // Доступ и изменение члена структуры через указатель

    cout << "Значение x: " << p.x << endl;

   return 0;
}



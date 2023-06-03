#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct rectangle
{

    int calculateArea(int a, int b) {
        return a * b;
    }

    int calculatePerimeter(int a, int b) {
        return (a + b) * 2;
    }

};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    rectangle rec1;


    int a, b;

    cout << "Введите ширину: ";
    cin >> a;
    cout << "Введите длину: ";
    cin >> b;

    cout << "Площадь: " << rec1.calculateArea(a, b) << endl;
    cout << "Периметр: " << rec1.calculatePerimeter(a, b) << endl;












   return 0;
}

#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

float circarea(float r);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите пожалуйста радиус круга: ";
    cin >> n;
    cout << "Площадь равна " << circarea(n);



  return 0;
}

float circarea(float r) {
    return pow((r * 3.14), 2);

}

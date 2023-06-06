#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// constant Distance objects

class Distance
{
private:
    int feet;
    int inches;
public:

    Distance(int ft, float in) : feet(ft), inches(in) { } // конструктор с двумя аргументами

    void getdist() // неконстантный метод
     {
        cout << "Введите число футов ";
        cin >> feet;
        cout << "Введите число дюймов: ";
        cin >> inches;
     }

    void showdist() const // константный метод
     {
        cout << feet << "\'-" << inches << '\"';
     }

};






int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     const Distance football(300, 0);
     cout << "Длина поля равна ";
     football.showdist();
     cout << endl;










  return 0;
}




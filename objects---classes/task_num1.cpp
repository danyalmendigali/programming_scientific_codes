#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class Numbers
{
private:
    int a;
    int b;
public:
    void set()
    {
        cout << "Введите первое число: ";
        cin >> this -> a;
        cout << "Введите второе число: ";
        cin >> this -> b;
    }

    void print()
    {
        cout << "\nПервое число = " << a;
        cout << "\nВторое число = " << b;
    }
};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Numbers numbers_1;

    numbers_1.set();
    numbers_1.print();






  return 0;
}


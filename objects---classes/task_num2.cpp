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
    int m_a;
    int m_b;
    int m_c;
public:
    void setValues()
    {
        cout << "Введите первое число: ";
        cin >> m_a;

        cout << "Введите второе число: ";
        cin >> m_b;

        cout << "Введите третье число: ";
        cin >> m_c;
    }

    void print()
    {
        cout << "\nПервое число: " << m_a;
        cout << "\nВторое число: " << m_b;
        cout << "\nТретье число: " << m_c;
    }
};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Numbers numbers1;
    numbers1.setValues();
    numbers1.print();



  return 0;
}


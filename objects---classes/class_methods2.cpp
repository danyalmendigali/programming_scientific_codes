#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class Employee
{
public:
    string m_name;
    int m_id;
    double m_wage;

    void print() // Метод вывода информации о работнике на экран
    {
        cout << "Name: " << m_name << "\nId: " << m_id << "\nWage: $" << m_wage << "\n";
    }
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Определяем двух работников
    Employee john { "John", 5, 30.00 };
    Employee maxim { "Maxim", 6, 32.75 };


    // Выводим информацию о работниках на экран
    john.print();
    cout << endl;

    maxim.print();
    cout << endl;




  return 0;
}

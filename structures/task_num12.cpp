#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct Employee
{
    string name;
    string job_title;
    int job_money;

};




int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    Employee employee_1[5];
    int money = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Введите имя сотрудника " << i + 1 << ": ";
        getline(cin, employee_1[i].name);
        cout << "Введите должность сотрудника " << i + 1 << ": ";
        getline(cin, employee_1[i].job_title);
        cout << "Введите зарплату сотрудника " << i + 1 << ": ";
        cin >> employee_1[i].job_money;
        money += employee_1[i].job_money;
        cin.ignore();
        cout << endl;
    }

    cout << "Средння зарплата - " money / 5 << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Имя сотрудника " << i + 1 << ": ";
        cout << employee_1[i].name << endl;
        cout << "Должность сотрудника " << i + 1 << ": ";
        cout << employee_1[i].job_title << endl;
        cout << "Зарплата сотрудника " << i + 1 << ": ";
        cout << employee_1[i].job_money << endl;
        cout << endl;
    }









   return 0;
}






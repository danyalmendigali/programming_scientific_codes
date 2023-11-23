#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// показ количества дней с начала года и до введенной даты

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int month, day, total_days;
    int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    cout << "Введите месяц (от 1 до 12): ";
    cin >> month;

    cout << "Введите день (от 1 до 31): ";
    cin >> day;

    total_days = day;

    FOR(i, 0, month - 1) {
       total_days += days_per_month[i];
    }

     cout << "\nОбщее число дней с начала года: " << total_days << endl;



  return 0;
}

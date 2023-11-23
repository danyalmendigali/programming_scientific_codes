#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// показ графика продаж

const int DISTRICTS = 4;
const int MONTHS = 3;

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int d, m;
    double sales[DISTRICTS][MONTHS];

    for(d = 0; d < DISTRICTS; d++) {
        for(m = 0; m < MONTHS; m++) {
            cout << "Введите объем продаж для отдела " << d + 1;
            cout << ", за месяц " << m + 1 << ": ";
            cin >> sales[d][m];
        }
    }

     cout << "\n\n";
     cout << "                     Месяц\n";
     cout << "            1          2          3";

     for(d = 0; d < DISTRICTS; d++)
     {
         cout << "\nОтдел " << d + 1;
         for(m = 0; m < MONTHS; m++)  {
            cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << setw(10) << sales[d][m];
         }
     }

     cout << endl;





  return 0;
}


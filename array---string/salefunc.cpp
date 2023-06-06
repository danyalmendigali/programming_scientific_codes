#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// передача массива в виде параметра

const int DISTRICTS = 4;
const int MONTHS = 3;
void display(double[DISTRICTS][MONTHS]);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    double sales[DISTRICTS][MONTHS] =
    {
      { 1432.07, 234.50, 654.01 },
      { 322.00, 13838.32, 17589.88 },
      { 9328.34, 934.00, 4492.30 },
      { 12838.29, 2332.63, 32.93 }
    };

     display(sales);
     cout << endl;


  return 0;
}


void display(double funsales[DISTRICTS][MONTHS])
{
     int d, m;

     cout << "\n\n";
     cout << "                     Месяц\n";
     cout << "            1          2          3";

     for(d = 0; d < DISTRICTS; d++)
     {

       cout << "\nОтдел " << d + 1;
        for(m = 0; m < MONTHS; m++)
        {
            cout << setiosflags(ios::fixed) << setw(10) << setiosflags(ios::showpoint) << setprecision(2) << funsales[d][m];
        }
     }

      cout << endl;
}

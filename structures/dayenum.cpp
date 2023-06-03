#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// объявление перечисляемого типа
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    days_of_week day1, day2; // определения переменных

    day1 = Mon;
    day2 = Thu;
    int diff = day2 - day1; // арифметическая операция
    cout << "Разница в днях: " << diff << endl;

    if(day1 < day2) {
        cout << "day1 наступит раньше, чем day2\n";
    }








   return 0;
}

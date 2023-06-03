#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct Time
{
    int hours;
    int minutes;
    int second;
    int seconds;

};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Time time1;
    cout << "Введите количество часов: ";
    cin >> time1.hours;

    cout << "Введите количество минут: ";
    cin >> time1.minutes;

    cout << "Введите количество секунд: ";
    cin >> time1.second;

    time1.seconds = time1.hours * 3600 + time1.minutes * 60 + time1.second;

    cout << "Общее количество секунд: " << time1.seconds << endl;














   return 0;
}






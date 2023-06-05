#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

long hms_to_secs(int hours, int minutes, int seconds)
{
    return hours * 3600 + minutes * 60 + seconds;
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int hours, minutes, seconds;
    cout << "Введите часа: ";
    cin >> hours;

    cout << "Введите минуты: ";
    cin >> minutes;

    cout << "Введите секунды: ";
    cin >> seconds;

    cout << "Количество секунд : " << hms_to_secs(hours, minutes, seconds);





  return 0;
}










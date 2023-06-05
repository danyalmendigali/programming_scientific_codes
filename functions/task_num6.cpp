#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

long time_to_secs(const Time& t1);
long secs_to_time(const int& second);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Time t1;
    cout << "Введите часа: ";
    cin >> t1.hours;

    cout << "Введите минуты: ";
    cin >> t1.minutes;

    cout << "Введите секунды: ";
    cin >> t1.seconds;

    cout << "Количество секунд : " << time_to_secs(t1) << endl << endl;


    cout << "\nВведите количество секунд: ";
    int second;
    cin >> second;
    cout << secs_to_time(second);






    return 0;
}

long time_to_secs(const Time& t1)
{
    return t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
}

long secs_to_time(const int& second)
{
    int a = second / 3600;
    int b = second % 3600;
    int c = b / 60;
    int d = b % 60;
    cout << "\nЧасов: " << a << endl;
    cout << "Минут: " << c << endl;
    cout << "Секунд: " << d << endl;
}

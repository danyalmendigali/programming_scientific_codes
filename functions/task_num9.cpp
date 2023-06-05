#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)



struct Time {
    int hours;
    int minutes;
    int seconds;
};

void swap(const Time& time1, const Time time2);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Time t1, t2;

    cout << "Введите время t1 (часы, минуты, секунды): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Введите время t2 (часы, минуты, секунды): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    cout << "До обмена:\n";
    cout << "t1: " << t1.hours << " ч, " << t1.minutes << " мин, " << t1.seconds << " сек\n";
    cout << "t2: " << t2.hours << " ч, " << t2.minutes << " мин, " << t2.seconds << " сек\n";

    swap(t1, t2);

    cout << "После обмена:\n";
    cout << "t1: " << t1.hours << " ч, " << t1.minutes << " мин, " << t1.seconds << " сек\n";
    cout << "t2: " << t2.hours << " ч, " << t2.minutes << " мин, " << t2.seconds << " сек\n";


  return 0;
}


void swap(Time& t1, Time& t2) {

    Time temp = t1;
    t1 = t2;
    t2 = temp;

}

#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение компонентов даты и времени:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    tm* currentTM = localtime(&currentTime);

    int year = currentTM->tm_year + 1900;
    int month = currentTM->tm_mon + 1;
    int day = currentTM->tm_mday;
    int hour = currentTM->tm_hour;
    int minute = currentTM->tm_min;
    int second = currentTM->tm_sec;

    cout << "Текущая дата: " << year << "-" << month << "-" << day << endl;
    cout << "Текущее время: " << hour << ":" << minute << ":" << second << endl;




   return 0;
}



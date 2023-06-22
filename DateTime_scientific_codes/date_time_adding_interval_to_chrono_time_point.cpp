#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Прибавление интервала к chrono::time_point:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::system_clock::time_point startTime = chrono::system_clock::now();

    chrono::seconds duration(10);
    chrono::system_clock::time_point endTime = startTime + duration;

    cout << "Стартовое время: " << chrono::system_clock::to_time_t(startTime) << endl;
    cout << "Конечное время: " << chrono::system_clock::to_time_t(endTime) << endl;





   return 0;
}


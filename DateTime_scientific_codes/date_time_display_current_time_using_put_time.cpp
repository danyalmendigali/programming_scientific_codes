#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Отображение текущего времени с использованием put_time:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    tm* currentTM = localtime(&currentTime);

    cout << "Текущее время: ";
    cout << put_time(currentTM, "%H:%M:%S") << endl;



   return 0;
}





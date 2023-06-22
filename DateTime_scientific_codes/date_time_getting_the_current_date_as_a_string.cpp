#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение текущей даты в виде строки:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::system_clock::time_point now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    tm* currentTM = localtime(&currentTime);

    ostringstream oss;
    oss << put_time(currentTM, "%Y-%m-%d");

    string dateString = oss.str();
    cout << "Текущая дата: " << dateString << endl;



   return 0;
}



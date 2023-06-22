#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Разбор даты из строки с использованием get_time:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string dateString = "2023-06-18";
    tm timeStruct = {};

    istringstream ss(dateString);
    ss >> get_time(&timeStruct, "%Y-%m-%d");

    chrono::system_clock::time_point timePoint = chrono::system_clock::from_time_t(mktime(&timeStruct));

    cout << "Разобранная дата: " << chrono::system_clock::to_time_t(timePoint) << endl;



   return 0;
}




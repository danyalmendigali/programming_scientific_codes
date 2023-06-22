#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование строки в объект chrono::time_point:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string timeString = "2023-06-18 10:30:00";
    tm timeStruct = {};

    istringstream ss(timeString);
    ss >> get_time(&timeStruct, "%Y-%m-%d %H:%M:%S");

    chrono::system_clock::time_point timePoint = chrono::system_clock::from_time_t(mktime(&timeStruct));

    cout << "Преобразованное время: " << chrono::system_clock::to_time_t(timePoint) << endl;





   return 0;
}



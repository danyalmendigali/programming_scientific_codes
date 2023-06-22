#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Определение дня недели по дате:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string dateString = "2023-06-18";
    tm timeStruct = {};

    istringstream ss(dateString);
    ss >> get_time(&timeStruct, "%Y-%m-%d");

    chrono::system_clock::time_point timePoint = chrono::system_clock::from_time_t(mktime(&timeStruct));

    tm* tm = localtime(&currentTime);
    int dayOfWeek = tm->tm_wday;

    cout << "День недели: " << dayOfWeek << endl;


   return 0;
}




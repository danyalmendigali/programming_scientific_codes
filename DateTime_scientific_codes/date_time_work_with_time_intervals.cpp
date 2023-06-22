#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Работа с интервалами времени:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::milliseconds duration(500);

    cout << "Начало работы" << endl;
    this_thread::sleep_for(duration);
    cout << "Прошло 500 миллисекунд" << endl;




   return 0;
}


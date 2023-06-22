#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование chrono::steady_clock для измерения времени выполнения:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::steady_clock::time_point start = chrono::steady_clock::now();

    // Код, время выполнения которого нужно измерить

    chrono::steady_clock::time_point end = chrono::steady_clock::now();
    chrono::duration<double, milli> elapsed = end - start;

    cout << "Время выполнения: " << elapsed.count() << " мс" << endl;




   return 0;
}


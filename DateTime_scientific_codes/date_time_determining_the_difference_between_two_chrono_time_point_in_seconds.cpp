#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Определение разницы между двумя chrono::time_point в секундах:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::system_clock::time_point start = chrono::system_clock::now();

    // Некоторая задержка

    chrono::system_clock::time_point end = chrono::system_clock::now();
    chrono::duration<double> elapsedSeconds = end - start;
    double seconds = elapsedSeconds.count();

    cout << "Прошло секунд: " << seconds << endl;


   return 0;
}


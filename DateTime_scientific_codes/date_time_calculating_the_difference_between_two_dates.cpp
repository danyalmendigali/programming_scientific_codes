#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Вычисление разницы между двумя датами:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    chrono::system_clock::time_point start = chrono::system_clock::now();
    chrono::system_clock::time_point end = chrono::system_clock::now();

    chrono::duration<double> elapsedSeconds = end - start;

    cout << "Прошло времени: " << elapsedSeconds.count() << " секунд" << endl;



   return 0;
}


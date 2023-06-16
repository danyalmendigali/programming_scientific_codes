#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка, является ли очередь пустой:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    queue<int> myQueue;

    // Проверка, является ли очередь пустой
    if (myQueue.empty()) {
        cout << "Очередь пуста." << endl;
    } else {
        cout << "Очередь не пуста." << endl;
    }


   return 0;
}




#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия элементов в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);

    if (!MyQueue.empty()) {
        cout << "Очередь не пуста." << endl;
    }
    else {
        cout << "Очередь пуста." << endl;
    }




   return 0;
}



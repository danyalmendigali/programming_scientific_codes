#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение первого элемента в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);

    if (!MyQueue.empty()) {
        int frontElement = MyQueue.front();
        cout << "Первый элемент: " << frontElement << endl;
    }




   return 0;
}


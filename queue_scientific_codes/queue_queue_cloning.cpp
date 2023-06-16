#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Клонирование очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> sourceQueue;
    queue <int> clonedQueue;

    // Добавление элементов в исходную очередь
    sourceQueue.push(10);
    sourceQueue.push(20);
    sourceQueue.push(30);

    // Клонирование очереди
    clonedQueue = sourceQueue;

    // Вывод элементов клонированной очереди
    while(!clonedQueue.empty()) {
        cout << clonedQueue.front() << " ";
        clonedQueue.pop();
    }



   return 0;
}

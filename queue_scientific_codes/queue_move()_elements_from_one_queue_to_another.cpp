#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование move для перемещения элементов из одной очереди в другую:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> sourceQueue;
    queue <int> destinationQueue;


    // Добавление элементов в исходную очередь
    sourceQueue.push(10);
    sourceQueue.push(20);
    sourceQueue.push(30);

    // Перемещение элементов из исходной очереди в целевую очередь
    while(!sourceQueue.empty()) {
        destinationQueue.push(move(sourceQueue.front()));
        sourceQueue.pop();
    }


    // Вывод элементов целевой очереди
    while(!destinationQueue.empty()) {
        cout << destinationQueue.front() << " ";
        destinationQueue.pop();
    }





    return 0;
}




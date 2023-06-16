#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Ограничение размера очереди с использованием контейнера deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int, deque<int>> MyQueue;

    // Ограничение размера очереди
    const int maxSize = 3;

    for(int i = 0; i < 5; i++) {
        // Добавление элементов в очередь
        MyQueue.push(i);
    }

    // Проверка размера очереди и удаление лишних элементов
    if(MyQueue.size() > maxSize) {
        MyQueue.pop();
    }

    // Вывод элементов очереди
    while(!MyQueue.empty()) {
        cout << MyQueue.front() << " ";
        MyQueue.pop();
    }



    return 0;
}





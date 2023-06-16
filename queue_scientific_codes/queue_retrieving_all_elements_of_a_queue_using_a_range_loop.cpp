#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Извлечение всех элементов очереди с использованием диапазонного цикла:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> myQueue;

    // Добавление элементов в очередь
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Извлечение всех элементов очереди с использованием диапазонного цикла

    for (const auto& element : myQueue) {
        cout << element << " ";
    }





    return 0;
}



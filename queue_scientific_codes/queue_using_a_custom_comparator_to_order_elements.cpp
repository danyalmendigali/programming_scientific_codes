#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского компаратора для упорядочения элементов в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    priority_queue <int, vector <int>, greater <int>> MyQueue;

    // Добавление элементов в очередь
    MyQueue.push(30);
    MyQueue.push(10);
    MyQueue.push(20);

    // Извлечение и вывод элементов в отсортированном порядке
    while(!MyQueue.empty()) {
        cout << MyQueue.top() << " ";
        MyQueue.pop();
    }


   return 0;
}



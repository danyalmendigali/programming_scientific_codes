#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение двух очередей:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> queue1;
    queue <int> queue2;

    // Добавление элементов в очередь 1
    queue1.push(10);
    queue1.push(20);

    // Добавление элементов в очередь 2
    queue2.push(30);
    queue2.push(40);

    // Объединение двух очередей
    while(!queue2.empty()) {
        queue1.push(queue2.front());
        queue2.pop();
    }


    // Вывод содержимого объединенной очереди
    while(!queue1.empty()) {
        cout << queue1.front() << " ";
        queue1.pop();
    }




   return 0;
}


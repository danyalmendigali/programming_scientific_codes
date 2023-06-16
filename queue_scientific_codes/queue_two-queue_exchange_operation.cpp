#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Операция обмена двух очередей:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> queue1;
    queue <int> queue2;

    // Добавление элементов в очередь 1
    queue1.push(10);
    queue1.push(20);
    queue1.push(30);


    // Добавление элементов в очередь 2
    queue2.push(40);
    queue2.push(50);

    // Обмен содержимым двух очередей
    swap(queue1, queue2);

    // Вывод содержимого очереди 1
    while(!queue1.empty()) {
        cout << queue1.front() << " ";
        queue1.pop();
    }



    cout << endl;

    // Вывод содержимого очереди 2
    while(!queue2.empty()) {
        cout << queue2.front() << " ";
        queue2.pop();

    }

   return 0;
}


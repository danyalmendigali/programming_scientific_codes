#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск элемента в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    // Добавление элементов в очередь
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);

    // Поиск элемента в очереди
    int elementToFind = 20;
    bool found = false;
    queue <int> tempQueue;

    while(!MyQueue.empty()) {
        if(MyQueue.front() == elementToFind) {
            found = true;
            break;
        }

        tempQueue.push(MyQueue.front());
        MyQueue.pop();
    }

    // Восстанавливаем исходную очередь
    while(!tempQueue.empty()) {
        MyQueue.push(tempQueue.front());
        tempQueue.pop();
    }


    if(found) {
        cout << "Элемент найден в очереди." << endl;
    }
    else {
        cout << "Элемент не найден в очереди." << endl;
    }



   return 0;
}


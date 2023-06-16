#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Извлечение последнего элемента из очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    // Добавление элементов в очередь
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);


    int lastElement;
    while(!MyQueue.empty()) {
        lastElement = MyQueue.front();
        MyQueue.pop();
    }


    cout << "Последний элемент: " << lastElement << endl;



    return 0;
}

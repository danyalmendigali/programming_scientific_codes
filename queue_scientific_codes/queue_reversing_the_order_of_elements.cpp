#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Переворот порядка элементов в очереди:

void reverseQueue(queue <int>& myQueue) {
    stack <int> myStack;

    // Копирование элементов из очереди в стек
    while (!myQueue.empty()) {
        myStack.push(myQueue.front());
        myQueue.pop();
    }

    // Копирование элементов из стека в очередь (с изменением порядка)
    while (!myStack.empty()) {
        myQueue.push(myStack.top());
        myStack.pop();
    }
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


   queue <int> myQueue;

    // Добавление элементов в очередь
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Переворот порядка элементов
    reverseQueue(myQueue);

    // Вывод элементов в измененном порядке
    while (!myQueue.empty()) {
       cout << myQueue.front() << " ";
        myQueue.pop();
    }


   return 0;
}


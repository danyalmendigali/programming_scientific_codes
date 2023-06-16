#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка, является ли очередь палиндромом:

bool isPalindrome(queue<char>& myQueue) {
    stack<char> myStack;

    // Копирование элементов из очереди в стек
    while (!myQueue.empty()) {
        myStack.push(myQueue.front());
        myQueue.pop();
    }

    // Сравнение элементов в очереди и стеке
    while (!myStack.empty()) {
        if (myQueue.front() != myStack.top()) {
            return false;
        }
        myQueue.pop();
        myStack.pop();
    }

    return true;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <char> myQueue;

    // Добавление элементов в очередь
    myQueue.push('a');
    myQueue.push('b');
    myQueue.push('c');
    myQueue.push('b');
    myQueue.push('a');

    // Проверка, является ли очередь палиндромом
    if (isPalindrome(myQueue)) {
        cout << "Очередь является палиндромом." << endl;
    } else {
        cout << "Очередь не является палиндромом." << endl;
    }




   return 0;
}

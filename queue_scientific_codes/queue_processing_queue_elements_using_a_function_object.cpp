#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обработка элементов очереди с использованием функционального объекта:

struct ElementProcessor
{
    void operator()(int element) {
       cout << "Обработка элемента: " << element << endl;
       // Дополнительная логика обработки элемента
    }
};

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    // Добавление элементов в очередь
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);


    // Обработка элементов очереди с использованием функционального объекта
    ElementProcessor processor;
    while(!MyQueue.empty()) {
        int frontElement = MyQueue.front();
        processor(frontElement);
        MyQueue.pop();
    }



    return 0;
}







#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского сравнения для упорядочения элементов в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int, vector <int>, greater <int>> myQueue;

    // Добавление элементов в очередь
    myQueue.push(30);
    myQueue.push(10);
    myQueue.push(20);

    // Извлечение и вывод элементов очереди в порядке возрастания
    while(!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }






    return 0;
}


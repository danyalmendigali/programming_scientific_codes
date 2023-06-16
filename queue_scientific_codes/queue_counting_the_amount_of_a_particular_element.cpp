#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет количества определенного элемента в очереди:

int countElementInQueue(const queue <int>& myQueue, int target) {
    queue <int> tempQueue = myQueue;
    int count = 0;


    // Подсчет количества элементов
    while(!tempQueue.empty()) {
        if(tempQueue.front() == target) {
            count++;
        }
        tempQueue.pop();
    }

    return count;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    // Добавление элементов в очередь
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(10);
    MyQueue.push(30);
    MyQueue.push(10);

    int targetElement = 10;

    // Подсчет количества определенного элемента в очереди
    int elementCount = countElementInQueue(MyQueue, targetElement);

    cout << "Количество элементов " << targetElement << " в очереди: " << elementCount << endl;





    return 0;
}






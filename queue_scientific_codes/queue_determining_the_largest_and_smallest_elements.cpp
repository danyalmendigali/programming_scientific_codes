#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Определение наибольшего и наименьшего элементов в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> myQueue;

    // Добавление элементов в очередь
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Определение наибольшего и наименьшего элементов
    int largest = myQueue.front();
    int smallest = myQueue.front();

    queue <int> tempQueue = myQueue;
    while (!tempQueue.empty()) {
        int current = tempQueue.front();
        largest = max(largest, current);
        smallest = min(smallest, current);
        tempQueue.pop();
    }

    cout << "Наибольший элемент: " << largest << endl;
    cout << "Наименьший элемент: " << smallest << endl;



   return 0;
}


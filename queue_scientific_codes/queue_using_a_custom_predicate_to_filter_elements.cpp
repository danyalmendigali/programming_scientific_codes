#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского предиката для фильтрации элементов в очереди:

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> myQueue;

    // Добавление элементов в очередь
    myQueue.push(1);
    myQueue.push(15);
    myQueue.push(20);
    myQueue.push(25);
    myQueue.push(30);


    // Фильтрация элементов очереди с использованием пользовательского предиката
    vector <int> filteredElements;
    while(!myQueue.empty()) {
        int frontElement = myQueue.front();
        if(isEven(frontElement)) {
            filteredElements.push_back(frontElement);
        }
        myQueue.pop();
    }


     // Вывод отфильтрованных элементов
    for (const auto& element : filteredElements) {
        cout << element << " ";
    }



    return 0;
}

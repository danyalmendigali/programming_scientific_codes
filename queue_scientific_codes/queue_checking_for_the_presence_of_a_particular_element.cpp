#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия определенного элемента в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);

    int elementToFind = 20;
    bool found = false;

    queue <int> tempQueue = MyQueue;
    while(!tempQueue.empty()) {
        if(tempQueue.front() == elementToFind) {
            found = true;
            break;
        }
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

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация по элементам очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);

    while(!MyQueue.empty()) {
        int frontElement = MyQueue.front();
        cout << frontElement << " ";
        MyQueue.pop();
    }




   return 0;
}




#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование deque для реализации очереди (FIFO):

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> queue;

    // Вставка элементов в конец очереди
    queue.push_back(1);
    queue.push_back(2);
    queue.push_back(3);

    while (!queue.empty()) {
        // Извлечение элементов из начала очереди
        int frontElement = queue.front();
        queue.pop_front();
        cout << frontElement << " ";
    }
    cout << endl;


   return 0;
}





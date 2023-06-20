#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование deque для реализации двусторонней очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> deque1;

    // Вставка элементов в конец очереди
    deque1.push_back(1);
    deque1.push_back(2);
    deque1.push_back(3);

    // Вставка элементов в начало очереди
    deque1.push_front(4);
    deque1.push_front(5);

    while (!deque1.empty()) {
        // Извлечение элементов из начала и конца очереди
        int frontElement = deque1.front();
        int backElement = deque1.back();
        deque1.pop_front();
        deque1.pop_back();
        cout << frontElement << " " << backElement << " ";
    }
    cout << endl;



   return 0;
}




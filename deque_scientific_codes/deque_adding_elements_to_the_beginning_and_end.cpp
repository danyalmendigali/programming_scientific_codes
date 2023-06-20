#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Создание deque и добавление элементов в начало и конец:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    deque<int> deque;

    deque.push_back(1); // Добавление элемента в конец
    deque.push_front(2); // Добавление элемента в начало

    for (int i : deque) {
        cout << i << " ";
    }
    cout << endl;





   return 0;
}

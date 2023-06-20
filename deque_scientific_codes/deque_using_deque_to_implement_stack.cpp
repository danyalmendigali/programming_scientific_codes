#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование deque для реализации стека (LIFO):

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> stack;

    // Вставка элементов в конец стека
    stack.push_back(1);
    stack.push_back(2);
    stack.push_back(3);

    while (!stack.empty()) {
        // Извлечение элементов с конца стека
        int topElement = stack.back();
        stack.pop_back();
        cout << topElement << " ";
    }
    cout << endl;


   return 0;
}







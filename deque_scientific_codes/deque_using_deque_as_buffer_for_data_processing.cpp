#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование deque в качестве буфера для обработки данных:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int bufferSize = 5;
    deque <int> buffer;

    // Заполнение буфера данными
    for (int i = 1; i <= bufferSize; ++i) {
        buffer.push_back(i);
    }

    // Обработка данных из буфера
    while (!buffer.empty()) {
        int frontElement = buffer.front();
        buffer.pop_front();
       cout << frontElement << " ";
    }
    cout << endl;




   return 0;
}


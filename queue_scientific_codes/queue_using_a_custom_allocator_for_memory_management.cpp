#include <bits/stdc++.h>
#include <windows.h>
#include <memory>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского аллокатора для управления памятью в очереди:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Определение пользовательского аллокатора
    template <typename T>
    struct MyAllocator {
        using value_type = T;
        T* allocate(size_t n) {
            return static_cast <T*> (malloc(n * sizeof(T)));
        }
        void deallocate(T* ptr, size_t n) {
            free(ptr);
        }
    };

    queue<int, deque<int, MyAllocator<int>>> myQueue;

    // Добавление элементов в очередь
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Извлечение и вывод элементов очереди
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }

    return 0;
}

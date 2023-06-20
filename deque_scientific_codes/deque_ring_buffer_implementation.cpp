#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование deque для реализации кольцевого буфера:


template <typename T>
class CircularBuffer {
private:
    deque <T> deque;
    size_t maxSize;

public:
    explicit CircularBuffer(size_t maxSize) : maxSize(maxSize) {}

    void push(const T& value) {
        if (deque.size() == maxSize) {
            deque.pop_front();
        }
        deque.push_back(value);
    }

    T& operator[](size_t index) {
        return deque[index];
    }

    size_t size() const {
        return deque.size();
    }
};

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    CircularBuffer<int> buffer(5);

    buffer.push(1);
    buffer.push(2);
    buffer.push(3);
    buffer.push(4);
    buffer.push(5);

    for (size_t i = 0; i < buffer.size(); ++i) {
        cout << buffer[i] << " ";
    }
    cout << endl;



   return 0;
}


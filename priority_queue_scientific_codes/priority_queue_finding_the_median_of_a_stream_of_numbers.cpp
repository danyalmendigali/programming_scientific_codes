#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск медианы потока чисел с использованием priority_queue:



double findMedianInStream() {
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    function<void(int)> balanceHeaps = [&](int num) {
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    };

    double median = 0;

    int num;
    while (cin >> num) {
        balanceHeaps(num);

        if (maxHeap.size() == minHeap.size()) {
            median = (maxHeap.top() + minHeap.top()) / 2.0;
        } else {
            median = maxHeap.top();
        }

        cout << "Текущая медиана: " << median << endl;
    }

    return median;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    cout << "Введите цифры (Ctrl+Z, чтобы остановить):" << endl;

    double median = findMedianInStream();

    cout << "Конечная медиана: " << median << endl;


    return 0;

}


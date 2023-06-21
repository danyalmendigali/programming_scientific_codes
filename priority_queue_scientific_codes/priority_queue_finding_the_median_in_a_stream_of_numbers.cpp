#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск медианы в потоке чисел с использованием priority_queue:



class MedianFinder {
private:
    priority_queue <int> maxHeap; // хранит меньшую половину чисел
    priority_queue <int, vector<int>, greater<int>> minHeap; // хранит большую половину чисел

public:
    void addNum(int num) {
        maxHeap.push(num); // добавить в maxHeap

        minHeap.push(maxHeap.top()); // балансировочные кучи
        maxHeap.pop();

        if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        } else {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MedianFinder finder;

    finder.addNum(5);
    finder.addNum(2);
    finder.addNum(7);
    finder.addNum(3);

    double median = finder.findMedian();

    cout << "Медиана: " << median << endl;


    return 0;

}


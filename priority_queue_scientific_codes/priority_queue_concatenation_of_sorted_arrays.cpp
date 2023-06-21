#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение отсортированных массивов с использованием priority_queue:

vector<int> mergeSortedArrays(const vector <vector<int>>& arrays) {
    struct Element {
        int value;
        int arrayIndex;
        int elementIndex;

        bool operator>(const Element& other) const {
            return value > other.value;
        }
    };

    priority_queue<Element, vector<Element>, greater<Element>> pq;

    for (int i = 0; i < arrays.size(); i++) {
        if (!arrays[i].empty()) {
            pq.push({arrays[i][0], i, 0});
        }
    }

    vector<int> mergedArray;

    while (!pq.empty()) {
        Element current = pq.top();
        pq.pop();

        mergedArray.push_back(current.value);

        int nextIndex = current.elementIndex + 1;
        if (nextIndex < arrays[current.arrayIndex].size()) {
            pq.push({arrays[current.arrayIndex][nextIndex], current.arrayIndex, nextIndex});
        }
    }

    return mergedArray;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <vector<int>> arrays = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

    vector <int> merged = mergeSortedArrays(arrays);

    cout << "Объединенный массив: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;


}


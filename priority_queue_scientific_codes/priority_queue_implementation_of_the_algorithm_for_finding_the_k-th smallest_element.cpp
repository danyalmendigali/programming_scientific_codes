#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Реализация алгоритма поиска k-го наименьшего элемента в массиве:


int findKthSmallestElement(const vector<int>& nums, int k) {
    priority_queue<int> pq;

    for (int num : nums) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }

    return pq.top();
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {9, 2, 5, 1, 7, 4};
    int k = 3;

    int kthSmallest = findKthSmallestElement(nums, k);

    cout << k << "-наименьший элемент: " << kthSmallest << endl;


    return 0;

}


#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск k наибольших элементов в массиве с использованием priority_queue:

vector <int> findKLargestElements(const vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int num : nums) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }

    vector<int> kLargest;
    while (!pq.empty()) {
        kLargest.push_back(pq.top());
        pq.pop();
    }

    return kLargest;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    vector<int> nums = {9, 4, 7, 2, 5};
    int k = 3;

    vector<int> kLargest = findKLargestElements(nums, k);

    cout << "K крупнейших элементов: ";
    for (int num : kLargest) {
        cout << num << " ";
    }
    cout << endl;



    return 0;

}


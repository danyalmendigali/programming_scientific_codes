#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск пересечения двух массивов с использованием unordered_set:

vector <int> findKSmallestElements(const vector<int>& nums, int k) {
    priority_queue<int> pq;

    for (int num : nums) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }

    vector<int> kSmallest;
    while (!pq.empty()) {
        kSmallest.push_back(pq.top());
        pq.pop();
    }

    return kSmallest;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {9, 4, 7, 2, 5};
    int k = 3;

    vector<int> kSmallest = findKSmallestElements(nums, k);

    cout << "K наименьших элементов: ";
    for (int num : kSmallest) {
        cout << num << " ";
    }
    cout << endl;


    return 0;


}


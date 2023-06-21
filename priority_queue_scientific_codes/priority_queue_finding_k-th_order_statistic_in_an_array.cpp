#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Нахождение k-ой порядковой статистики в массиве с использованием priority_queue:

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

    vector<int> nums = {9, 4, 7, 2, 5};
    int k = 3;

    int kthSmallest = findKthSmallestElement(nums, k);

    cout << "K-й наименьший элемент: " << kthSmallest << std::endl;


}

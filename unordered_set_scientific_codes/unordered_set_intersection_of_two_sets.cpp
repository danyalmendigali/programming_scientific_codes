#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пересечение двух множеств с использованием

vector<int> findIntersection(const vector<int>& nums1, const vector<int>& nums2) {
    unordered_set <int> set1(nums1.begin(), nums1.end());
    vector <int> intersection;

    for (int num : nums2) {
        if (set1.count(num)) {
            intersection.push_back(num);
        }
    }

    return intersection;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums1 = {1, 2, 3, 4, 5};
    vector <int> nums2 = {4, 5, 6, 7};

    vector <int> intersection = findIntersection(nums1, nums2);

    cout << "Пересечение: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}






#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет количества пересечений отрезков с использованием unordered_set:


int countIntersections(const vector <pair<int, int>>& segments) {
    unordered_set<int> points;
    int count = 0;

    for (const auto& segment : segments) {
        for (int i = segment.first; i <= segment.second; i++) {
            if (points.count(i) > 0) {
                count++;
            }
            points.insert(i);
        }
    }

    return count;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <pair<int, int>> segments = {{1, 5}, {3, 7}, {2, 4}, {6, 8}};

    int intersectionCount = countIntersections(segments);

    cout << "Количество переcечений: " << intersectionCount << std::endl;


   return 0;
}



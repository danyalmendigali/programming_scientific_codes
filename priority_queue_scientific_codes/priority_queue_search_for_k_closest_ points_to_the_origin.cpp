#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск k ближайших точек к началу координат:


struct Point {
    int x;
    int y;

    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    double distanceFromOrigin() const {
        return sqrt(x * x + y * y);
    }
};

struct PointCompare {
    bool operator()(const Point& p1, const Point& p2) const {
        return p1.distanceFromOrigin() < p2.distanceFromOrigin();
    }
};

vector <Point> findKClosestPoints(const vector<Point>& points, int k) {
    priority_queue<Point, vector<Point>, PointCompare> pq;

    for (const Point& point : points) {
        pq.push(point);
        if (pq.size() > k) {
            pq.pop();
        }
    }

    vector<Point> kClosestPoints;
    while (!pq.empty()) {
        kClosestPoints.push_back(pq.top());
        pq.pop();
    }

    reverse(kClosestPoints.begin(), kClosestPoints.end());

    return kClosestPoints;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<Point> points = {
        {3, 5},
        {1, 2},
        {4, 6},
        {2, 3},
        {5, 4}
    };
    int k = 3;

    vector<Point> kClosest = findKClosestPoints(points, k);

    cout <<  k << " ближайшие точки к началу координат:" << endl;
    for (const Point& point : kClosest) {
        cout << "(" << point.x << ", " << point.y << ")" << endl;
    }


    return 0;

}


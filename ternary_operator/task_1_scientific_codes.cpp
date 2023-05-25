#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Существует ли треугольник с такими сторонами

string solve(int& a, int& b, int& c) {

    return ((a + b > c) && (a + c > b && b + c > b))? "YES" : "NO";

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;







   return 0;
}


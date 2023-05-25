#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Нахождение максимума и минимума в векторе

void solve() {
    vector <int> myVector;
    int n;
    cout << "Введите количество чисел с векторе: ";
    cin >> n;
    FOR(i, 0, n) {
      int a;
      cout << "Введите " << i << " число: ";
      cin >> a;
      myVector.push_back(a);
    }

    int max = myVector[0];
    int min = myVector[0];

    for(int i = 0; i < myVector.size(); i++) {
        max = (myVector[i] > max)? myVector[i] : max;
        min = (myVector[i] < min)? myVector[i] : min;
    }


    cout << endl;
    cout << "Max " << max << endl;
    cout << "Min " << min << endl;



}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();




   return 0;
}



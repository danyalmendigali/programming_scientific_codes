#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для объединения двух контейнеров в третий контейнер:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers1 = {1, 2, 3};
    vector<int> numbers2 = {4, 5, 6};
    vector<int> combined;

    // Объединяем два контейнера с использованием итераторов
    copy(numbers1.begin(), numbers1.end(), back_inserter(combined));
    copy(numbers2.begin(), numbers2.end(), back_inserter(combined));

    // Выводим элементы в объединенном контейнере
    for (auto it = combined.begin(); it != combined.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}

















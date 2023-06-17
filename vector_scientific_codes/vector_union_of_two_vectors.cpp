#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение двух векторов:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers1 = {1, 2, 3};
    vector <int> numbers2 = {4, 5, 6};

    vector <int> combinedNumbers;
    combinedNumbers.reserve(numbers1.size() + numbers2.size());
    combinedNumbers.insert(combinedNumbers.end(), numbers1.begin(), numbers1.end());
    combinedNumbers.insert(combinedNumbers.end(), numbers2.begin(), numbers2.end());


    for(int number : combinedNumbers) {
        cout << number << " ";
    }
    cout << endl;


   return 0;
}

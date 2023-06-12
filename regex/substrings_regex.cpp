#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет количества вхождений подстроки в строке:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "The cat and the hat sat on the mat.";
    regex regex("at");

    sregex_iterator iterator(text.begin(), text.end(), regex);
    sregex_iterator end;

    int count = 0;
    while (iterator != end) {
        ++count;
        ++iterator;
    }

    cout << "Количество вхождений: " << count << endl;







   return 0;
}

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Разбиение строки на слова:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string sentence = "The quick brown fox";
    regex regex(R"(\b\w+\b)");

    sregex_iterator iterator(sentence.begin(), sentence.end(), regex);
    sregex_iterator end;

    while (iterator != end) {
        smatch match = *iterator;
        cout << "Слово: " << match.str() << endl;
        ++iterator;
    }


   return 0;
}



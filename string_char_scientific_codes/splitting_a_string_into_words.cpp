#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Разделение строки на слова:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world! How are you?";
    vector<std::string> words;
    stringstream ss(str);
    string word;

    while (ss >> word) {   // Разделение строки на слова
        words.push_back(word);
    }

    for (const auto& word : words) {
        cout << word << endl;
    }
   return 0;
}

#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет частоты появления слов в тексте с использованием unordered_set:

unordered_map <string, int> countWordFrequencies(const string& text) {
    unordered_map <string, int> freqMap;
    stringstream iss(text);
    string word;

    while (iss >> word) {
        // Удалить знаки препинания и преобразовать в нижний регистр
        string cleanedWord;
        for (char ch : word) {
            if (isalpha(ch)) {
                cleanedWord += tolower(ch);
            }
        }
        freqMap[cleanedWord]++;
    }

    return freqMap;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "The quick brown fox jumps over the lazy dog";

    unordered_map<string, int> wordFreqMap = countWordFrequencies(text);

    cout << "Частоты слов:" << endl;
    for (const auto& pair : wordFreqMap) {
        cout << pair.first << ": " << pair.second << endl;
    }



   return 0;
}


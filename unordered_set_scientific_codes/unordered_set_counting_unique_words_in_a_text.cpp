#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет уникальных слов в тексте с использованием std::unordered_set:

int countUniqueWords(const string& text) {
    unordered_set <string> uniqueWords;
    istringstream iss(text);
    string word;
    int count = 0;

    while (iss >> word) {
        if (uniqueWords.count(word) == 0) {
            uniqueWords.insert(word);
            count++;
        }
    }

    return count;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "Быстрая коричневая лиса прыгает через ленивую собаку";

    int uniqueWordCount = countUniqueWords(text);

    cout << "Количество уникальных слов: " << uniqueWordCount << endl;



   return 0;
}


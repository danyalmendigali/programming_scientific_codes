#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет уникальных слов в тексте:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "Быстрая коричневая лиса прыгает через ленивую собаку";
    set <string> uniqueWords;

    stringstream ss(text);
    string word;

    while (ss >> word) {
        uniqueWords.insert(word);
    }

    cout << "Количество уникальных слов: " << uniqueWords.size() << endl;



   return 0;
}




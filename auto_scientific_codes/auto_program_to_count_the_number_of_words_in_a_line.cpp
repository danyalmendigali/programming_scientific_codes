#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для подсчета количества слов в строке:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     string sentence = "Hello, world! This is a sentence.";

    istringstream iss(sentence);

    int wordCount = 0;
    // Использование auto для определения типа переменной word
    while (auto issWord = iss >> ws, !issWord.eof()) {
        string word;
        issWord >> word;
        ++wordCount;
    }

    cout << "Количество слов: " << wordCount << endl;



   return 0;
}



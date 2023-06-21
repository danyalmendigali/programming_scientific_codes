#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск k наиболее часто встречающихся слов в тексте с использованием priority_queue:


struct WordFrequency {
    string word;
    int frequency;

    WordFrequency(const string& w, int f) : word(w), frequency(f) {}

    bool operator<(const WordFrequency& other) const {
        return frequency < other.frequency;
    }
};

vector <string> findTopKFrequentWords(const string& text, int k) {
    unordered_map <string, int> wordCount;
    priority_queue <WordFrequency, vector<WordFrequency>> pq;

    istringstream iss(text);
    string word;
    while (iss >> word) {
        wordCount[word]++;
    }

    for (const auto& pair : wordCount) {
        pq.push(WordFrequency(pair.first, pair.second));
        if (pq.size() > k) {
            pq.pop();
        }
    }

    vector <string> topKFrequent;
    while (!pq.empty()) {
        topKFrequent.push_back(pq.top().word);
        pq.pop();
    }

    reverse(topKFrequent.begin(), topKFrequent.end());

    return topKFrequent;
}




int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed sed tristique enim.";
    int k = 3;

    vector <string> topKFrequentWords = findTopKFrequentWords(text, k);

   cout << "Cамые " << k << " частые слова:" << endl;
    for (const auto& word : topKFrequentWords) {
        cout << word << endl;
    }


    return 0;

}


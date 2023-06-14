#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского сравнения для сортировки map:

struct LengthComparator {
    bool operator()(const std::string& str1, const std::string& str2) const {
        return str1.length() < str2.length();
    }
};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int, LengthComparator> words;

    // Вставка элементов
    words["apple"] = 5;
    words["banana"] = 6;
    words["carrot"] = 6;
    words["date"] = 4;

    // Вывод элементов в отсортированном порядке
    for (const auto& pair : words) {
        cout << "Word: " << pair.first << ", Length: " << pair.second << endl;
    }

  return 0;
}








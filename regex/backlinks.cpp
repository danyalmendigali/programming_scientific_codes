#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск и замена с использованием обратных ссылок

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string sentence = "The quick brown fox jumps over the lazy dog.";
    regex regex(R"(the (\w+))", regex_constants::icase);

    string result = regex_replace(sentence, regex, "that $1");
    cout << "Результат замены: " << result << endl;







   return 0;
}


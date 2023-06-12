#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b)  for(int i = a; i < b; i++)

// Замена всех слов в строке на их обратное значение

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string sentence = "Hello, world! This is a sentence.";

    regex regex(R"(\b(\w+)\b)");

    string result = regex_replace(sentence, regex, [](const smatch& match) {
        string word = match[1].str();
        reverse(word.begin(), word.end());
        return word;
    });

    cout << "Результат замены: " << result << endl;



    return 0;
}





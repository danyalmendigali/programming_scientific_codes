
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b)  for(int i = a; i < b; i++)

// Извлечение всех слов, начинающихся с заглавной буквы, из текста

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "This is a Sample Text with Capitalized Words";

    regex regex(R"(\b[A-Z][a-zA-Z]+\b)");

    sregex_iterator iterator(text.begin(), text.end(), regex);
    sregex_iterator end;

    while (iterator != end) {
        smatch match = *iterator;
        cout << "Найдено слово: " << match.str() << endl;
        ++iterator;
    }


    return 0;
}








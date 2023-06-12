#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b)  for(int i = a; i < b; i++)

// Извлечение всех хештегов из текста

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "This is a #sample text with #hashtags";
    regex regex(R"(#(\w+))");

    sregex_iterator iterator(text.begin(), text.end(), regex);
    sregex_iterator end;

    while (iterator != end) {
        smatch match = *iterator;
        cout << "Найден хештег: " << match[1].str() << endl;
        ++iterator;
    }



    return 0;
}






#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b)  for(int i = a; i < b; i++)

// Замена всех цифр в строке на их сумму

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string sentence = "I have 5 apples and 3 oranges";
    regex regex(R"(\d+)");
    string result = regex_replace(sentence, regex, [](const smatch& match) {
        int sum = 0;
        for (char digit : match.str()) {
            sum += digit - '0';
        }
        return to_string(sum);
    });

    cout << "Результат замены: " << result << std::endl;


    return 0;
}







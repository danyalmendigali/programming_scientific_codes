#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// Проверка валидности адреса электронной почты с использованием более сложных правил

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string email = "john.doe@example.com";
    regex regex(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");


    if(regex_match(email, regex)) {
        cout << "Адрес электронной почты валиден" << endl;
    }
    else {
        cout << "Адрес электронной почты невалиден" << endl;
    }








    return 0;
}





#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// Проверка валидности номера телефона в заданном формате

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string phoneNumber = "+1-555-123-4567";
    regex regex(R"(^\+\d{1,}-\d{3}-\d{3}-\d{4}$)");

    if(regex_match(phoneNumber, regex)) {
        cout << "Номер телефона валиден" << endl;
    }
    else {
        cout << "Номер телефона невалиден" << endl;
    }







    return 0;
}



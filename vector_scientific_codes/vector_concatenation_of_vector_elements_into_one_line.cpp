#include <bits/stdc++.h>
#include <windows.h>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение элементов вектора в одну строку:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <string> words  = {"Hello", "World", "C++"};

    // Объединение элементов вектора в одну строку
    ostringstream oss;

    for(const string& word : words) {
        oss << word << " ";
    }
    string result = oss.str();

    cout << "Результат: " << result << endl;





   return 0;
}


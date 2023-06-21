#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск первого неповторяющегося символа в строке с использованием unordered_set:


char findFirstNonRepeatingChar(const string& str) {
    unordered_set<char> seenChars;
    for (char ch : str) {
        if (seenChars.count(ch) == 0) {
            seenChars.insert(ch);
        } else {
            seenChars.erase(ch);
        }
    }

    if (!seenChars.empty()) {
        return *(seenChars.begin());
    } else {
        return '\0';  // Если неповторяющийся символ не найден
    }
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "abracadabra";

    char firstNonRepeatingChar = findFirstNonRepeatingChar(str);

    if (firstNonRepeatingChar != '\0') {
        cout << "Первый неповторяющийся символ: " << firstNonRepeatingChar << endl;
    } else {
        cout << "Неповторяющийся символ не найден" << endl;
    }



   return 0;
}




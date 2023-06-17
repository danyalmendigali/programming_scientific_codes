#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка, является ли вектор палиндромом:

bool isPalindrome(const vector <int> numbers) {
    vector <int> reversedNumbers = numbers;
    reverse(reversedNumbers.begin(), reversedNumbers.end());
    return numbers == reversedNumbers;

}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers1 = {1, 2, 3, 2, 1};
    vector <int> numbers2 = {1, 2, 3, 4, 5};

    cout << boolalpha;
    cout << "Вектор 1: " << isPalindrome(numbers1) << endl;
    cout << "Вектор 2: " << isPalindrome(numbers2) << endl;


   return 0;
}


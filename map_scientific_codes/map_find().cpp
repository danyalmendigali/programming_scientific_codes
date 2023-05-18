#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

int solve() {
    map <int, string> studentMap;
    studentMap[1] = "Alice";
    studentMap[2] = "Bob";
    studentMap[3] = "Charlie";

    for(const auto& pair : studentMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    auto it = studentMap.find(2);
    if(it != studentMap.end()) {
        cout << "Найдим элемент с ключом 2: " << it -> second << endl;
    }


    studentMap.erase(3);

    if(studentMap.count(3) == 0) {
        cout << "Элемент с ключом 3 не найден." << endl;
    }


}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();




   return 0;
}

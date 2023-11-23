#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


int max(const vector<int>& list) {
    if (list.size() == 2) {
        return list[0] > list[1] ? list[0] : list[1];
    }

    int sub_max = max(vector<int>(list.begin() + 1, list.end()));
    // Таким образом, sub_max представляет собой новый вектор, содержащий
    // подсписок элементов исходного вектора list начиная со второго элемента и до последнего элемента.

    return list[0] > sub_max ? list[0] : sub_max;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> my_list = {10, 50, 30, 40, 20};
    int max_value = max(my_list);
    cout << "Наибольшее число: " << max_value << endl;





    return 0;
}

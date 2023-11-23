#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <vector>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


void look_for_key(const vector <int>& box)
{
    for(int item : box) {
        // Если элемент - это коробка, рекурсивно вызываем look_for_key для коробки
        if(item >= 0) {
            look_for_key(box[abs(item)]);
        }
        // Если элемент - это ключ, выводим сообщение и завершаем поиск
        else
        {
            cout << "Ключ найден!" << endl;
            return ;
        }
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> main_box = {1, 2, 3, 4, 5, 6, 7, -2, - 1, -3};
    look_for_key(main_box);



   return 0;
}

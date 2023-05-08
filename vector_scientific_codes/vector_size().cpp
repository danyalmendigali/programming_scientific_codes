#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie(0);
     setlocale(LC_ALL, "Russian");

     vector <int> v;
     cout << "Размер в начале: " << v.size() << endl;
     cout << "Текущее содержимое вектора: ";

     for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        }

        cout << endl << endl << endl;


     cout << "Введите 5 чисел: " << endl;
     for(int i = 1; i <= 5; i++) {
        cout << "Элемент #" << i << ": ";
        int n;
        cin >> n;
        v.push_back(n);
     }


     cout << "Размер в начале: " << v.size() << endl;
     cout << "Текущее содержимое вектора: ";

     for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        }

        cout << endl << endl << endl;














   return 0;
}

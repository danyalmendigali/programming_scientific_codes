#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");


     cout << "Вектор #1: " << endl;
     vector <int> numbers1 {1, 2, 3, 4, 5, 6};
     auto iter1 = numbers1.cbegin(); // константный итератор указывает на первый элемент
     numbers1.insert(iter1 + 1, 3);
     if(numbers1.empty()) { // проверяет пустой ли вектор или нет
        cout << "Вектор сейчас пустой! " << endl;
     }
     else
        cout << "Вектор сейчас не пустой!" << endl;
     cout << "Размер вектора: " << numbers1.size() << endl; // Для того чтобы узнать размер вектор используется функция size()
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;
     cout << "Удаление всех элементов: " << endl;
     numbers1.clear(); // Удаление всех элементов в векторе
     cout << "Размер вектора сейчас: " << numbers1.size() << endl;
     cout << endl << endl << endl;






     cout << "Вектор #2: " << endl;
     vector <int> numbers2 {1, 2};
     auto iter2 = numbers2.cend(); // константный итератор указывает на последний элемент
     numbers2.insert(iter2 - 1, {51, 56, 53});
     if(numbers2.empty()) { // проверяет пустой ли вектор или нет
        cout << "Вектор сейчас пустой! " << endl;
     }
     else
        cout << "Вектор сейчас не пустой! " << endl;
      cout << "Размер вектора: " << numbers2.size() << endl; // Для того чтобы узнать размер вектор используется функция size()
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl;
     cout << "Удаление всех элементов: " << endl;
     numbers2.clear(); // Удаление всех элементов в векторе
     cout << "Размер вектора сейчас: " << numbers2.size() << endl;
     cout << endl << endl << endl;







     cout << "Вектор #3: " << endl;
     vector <int> numbers3 {44, 51, 23, 45, 67, 37};
     auto iter3  = numbers3.cbegin(); // константный итератор указывает на первый элемент
     numbers3.insert(iter3 + 1, 5);
     if(numbers3.empty()) { // проверяет пустой ли вектор или нет
        cout << "Вектор сейчас пустой! " << endl;
     }
     else
        cout << "Вектор сейчас не пустой!" << endl;

     cout << "Размер вектора: " << numbers3.size() << endl; // Для того чтобы узнать размер вектор используется функция size()
     for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
     }

     cout << endl;
     cout << "Удаление всех элементов: " << endl;
     numbers3.clear(); // Удаление всех элементов в векторе
     cout << "Размер вектора сейчас: " << numbers3.size() << endl;
     cout << endl << endl << endl;








     /*
     vector <int> v {1, 2, 3, 4, 5};
     if(v.empty()) { // .empty() проверяет пустой ли вектор или нет
        cout << "Вектор пустой!";
     }
     else cout << "Вектор имеет данные!";
        */

   return 0;
}


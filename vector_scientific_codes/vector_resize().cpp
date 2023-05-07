#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie(0);
     setlocale(LC_ALL, "Russian");


     cout << "Вектор #1: " << endl;
     vector <int> numbers1 {1, 2, 3, 4, 5, 6};
     auto iter1 = numbers1.cbegin();
     numbers1.insert(iter1 + 1, 4);
     if(numbers1.empty()) {
        cout << "Данный вектор пуст! " << endl;
     }
     else
        cout << "Данный вектор имеет числа! " << endl;

     cout << "Сейчас размер вектора = " << numbers1.size() << endl;
     cout << "Содержание вектора: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl << endl << endl;
     cout << "После numbers1.resize(10, 8): " << endl;
     numbers1.resize(10, 8);
     cout << "Сейчас размер вектора = " << numbers1.size() << endl;
     cout << "Содержание вектора: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;
     numbers1.clear();
     cout << "Размер после numbers1.clear(): " << numbers1.size() << endl;
     cout << endl << endl << endl;







     cout << "Вектор #2: " << endl;
     vector <int> numbers2 = {34, 54, 21, 43, 26};
     auto iter2 = numbers2.cend();
     numbers2.insert(iter2 - 1, {1023, 3543, 5356, 3642});
     if(numbers2.empty()) {
        cout << "Данный вектор пуст! " << endl;
     }
     else
        cout << "Данный вектор имеет числа!" << endl;

      cout << "Сейчас размер вектора = " << numbers2.size() << endl;
      cout << "Содержание вектора: ";
      for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
      }
      cout << endl << endl << endl;

      numbers2.resize(2);
      cout << "Содержание после numbers2.resize(2): ";
      for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
      }
      cout << endl << endl;

      cout << "Содержание после numbers2.resize(5, 8): ";
      numbers2.resize(5, 8);
      cout << "Сейчас размер вектора = " << numbers2.size() << endl;
      cout << "Содержание вектора: ";
      for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
      }
      cout << endl;
      numbers2.clear();
      cout << "Размер после numbers2.clear(): " << numbers2.size() << endl;
      cout << endl << endl << endl;









      cout << "Вектор #3: " << endl;
      int g;
      cout << "Введите количество чисел в векторе: ";
      cin >> g;
      vector <int> numbers3 (g);
      cout << "Введите " << g << " чисел: " << endl;
      for(int i = 0; i < g; i++) {
        cout << "Введите " << i << " число: ";
        cin >> numbers3[i];
      }
      int h, l, k;
      h--;
      cout << "Есть последовательность из " << numbers3.size() << " чисел" << endl;
      cout << "Введите три числа 1. С какого элемента хотите изменить последовательность. 2. Сколько хотите цифр добавить. 3. Введите какую цифру вы хотите добавить: " << endl;
      cout << " 1) ";
      cin >> h;

      cout << " 2) ";
      cin >> l;

      cout << " 3) ";
      cin >> k;
      auto iter3 = numbers3.cbegin();
      numbers3.insert(iter3 + h, l, k);
      cout << "Содержимое вектора сейчас: " ;
      for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
      }
      cout << endl;

      if(numbers3.empty()) {
        cout << "Ваш вектор пуст! " << endl;
      }
      else
        cout << "Ваш вектор имеет числа! " << endl;

       numbers3.resize(3);
       cout << "Изменяем размер вектора на 3 " << endl;
       cout << "Теперь размер вектора = " << numbers3.size() << endl;
       cout << "Содержимое вектора сейчас: ";
       for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
       }
       cout << endl << endl;


       cout << "Делаем numbers3.resize(11, 3) " << endl;
       numbers3.resize(11, 3);
       cout << "Сейчас размер вектора = " << numbers3.size() << endl;
       cout << "Содержимое вектора сейчас: ";
       for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
       }
       cout << endl << endl;



     /*
     vector <int> numbers1 = {1, 2, 3, 4, 5, 6};
     numbers1.resize(4);
     numbers1.resize(6, 8);

     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;
     */

   return 0;
}


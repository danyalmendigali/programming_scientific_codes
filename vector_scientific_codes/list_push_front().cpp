#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
     vector <int> numbers_vector {1, 2, 3, 4, 5};
     list <int> numbers_list {10, 11, 12, 13, 14};

     cout << "Есть vector <int> numbers_vector {1, 2, 3, 4, 5}" << endl;
     cout << "Есть list <int> numbers_list {10, 11, 12, 13, 14}" << endl;
     cout << endl;

     cout << "Размер вектора: " << numbers_vector.size() << endl;
     cout << "Размер листа: " << numbers_list.size() << endl;

     cout << "Содержимое вектора" << endl;
    for(vector <int>::const_iterator iter = numbers_vector.cbegin(); iter != numbers_vector.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;


   cout << "Содержимое листа" << endl;
    for(list <int>::const_iterator iter2 = numbers_list.cbegin(); iter2 != numbers_list.cend(); ++iter2)
    {
        cout << *iter2 << " ";
    }
    cout << endl << endl;


    cout << "Содержимое вектора с использованием реверсивного итератора" << endl;
    for(vector <int>::const_reverse_iterator iter3 = numbers_vector.crbegin(); iter3 != numbers_vector.crend(); ++iter3)
    {
        cout << *iter3 << " ";
    }
    cout << endl << endl;


    cout << "Содержимое листа с использованием реверсивного итератора" << endl;
    for(list <int>::const_reverse_iterator iter4 = numbers_list.crbegin(); iter4 != numbers_list.crend(); ++iter4)
    {
        cout << *iter4 << " ";
    }
    cout << endl << endl;


    cout << "Добавляем в конец вектора числа с помощью метода push_back()" << endl;
    for(int i = 0; i < 10; i++) {
        numbers_vector.push_back(i);
    }
    cout << endl;

    cout << "Добавляем в конец листа числа с помощью метода push_back()" << endl;
    for(int i = 10; i < 20; i++) {
        numbers_list.push_back(i);
    }
    cout << endl << endl;

    cout << "Сейчас размер вектор: " << numbers_vector.size() << endl;
    cout << "Сейчас размер листа: " << numbers_list.size() << endl;

    cout << "Выводим содержимое вектора" << endl;
    for(vector <int>::iterator iter5 = numbers_vector.begin(); iter5 != numbers_vector.end(); ++iter5)
    {
        cout << *iter5 << " ";
    }
    cout << endl << endl;

    cout << "Выводим содержимое листа" << endl;
    for(list <int>::iterator iter6 = numbers_list.begin(); iter6 != numbers_list.end(); ++iter6)
    {
        cout << *iter6 << " ";
    }
    cout << endl << endl;

    cout << "Добавляем числа в начало листа с помощью функции push_front";

    for(int i = 0; i < 20; i++)
    {
        numbers_list.push_front(i);
    }

    cout << "Размер листа после функции push_front() = " << numbers_list.size() << endl;
    for(list <int>::const_iterator iter7 = numbers_list.cbegin(); iter7 != numbers_list.cend(); ++iter7)
    {
        cout << *iter7 << " ";
    }
    cout << endl << endl;

    cout << "Capacity вектора: " << numbers_vector.capacity() << endl;
    cout << "size() вектора: " << numbers_vector.size() << endl;
    cout << endl;
    cout << "Контейнер list в стандартной библиотеке языка C++ не имеет функции capacity" << endl;
    cout << "size() листа: " << numbers_list.size() << endl;






}

int main() {
     cin.tie(0);
     setlocale(LC_ALL, "Russian");

        int t;
        cin >> t;
        while(t--)
        solve();










   return 0;
}

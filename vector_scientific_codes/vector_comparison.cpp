#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// Сравнение векторов

int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер первого вектора: ";
    int n, n2;
    cin >> n;
    cout << "Введите размер второго вектора: ";
    cin >> n2;
    vector <int> a (n), b (n2);

    cout << "Введите содержимое первого вектора" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Элемент #" << i << " = ";
        cin >> a[i];
    }
    cout << endl;

    cout << "Введите содержимое второго вектора" << endl;
    for(int i = 0; i < n2; i++) {
        cout << "Элемент #" << i << " = ";
        cin >> b[i];
    }
    cout << endl;

    if(a.empty()) {
        cout << "Первый вектор пуст! " << endl;
    }
    else cout << "Первый вектор имеет числа!" << endl;

    if(b.empty()) {
        cout << "Второй вектор пуст! " << endl;
    }
    else cout << "Второй вектор имеет числа!" << endl;

    auto iter1 = a.cbegin();
    auto iter2 = b.cbegin();

    a.insert(iter1 + 1, 3, 5);
    b.insert(iter2 + 3, {5, 76, 36, 26});

    cout << "Размер первого вектора: " << a.size() << endl;
    cout << "Размер второго вектора: " << b.size() << endl;
    cout << "Содержимое первого вектор" << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << "Элемент #" << i << " = " << a[i] << endl;
    }

    cout << "Содержимое второго вектор" << endl;
    for(int i = 0; i < b.size(); i++) {
        cout << "Элемент #" << i << " = " << b[i] << endl;
    }
    cout << endl << endl;


    a.resize(10, 878);
    b.resize(12, 898);


    cout << "Размер первого вектора: " << a.size() << endl;
    cout << "Размер второго вектора: " << b.size() << endl;
    cout << "Содержимое первого вектор" << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << "Элемент #" << i << " = " << a[i] << endl;
    }
    cout << endl << endl;

    cout << "Содержимое второго вектор" << endl;
    for(int i = 0; i < b.size(); i++) {
        cout << "Элемент #" << i << " = " << b[i] << endl;
    }

    if(bool ab = a == b) {
        cout << "Векторы равны!" << endl;
    }

    if(bool ab = a != b) {
        cout << "Векторы не равны! " << endl;
    }

    cout << endl << endl << endl;

    vector <int> v1 {1, 2, 3};
    vector <int> v2 {1, 2, 3};
    vector <int> v3 {3, 2, 1};

    if(bool v1v2 = v1 == v2) {
        cout << "Первый и второй вектор равны! " << endl;
    }
    if(bool v2v3 = v1 == v3) {
        cout  << "Первый и третий вектор равны!" << endl;
    }
    else if(bool v1v3 = v1 != v3) {
        cout << "Первый и третий вектор на равны!" << endl;
    }




    return 0;
}

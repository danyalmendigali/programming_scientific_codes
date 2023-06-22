#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Работа с бинарными данными

struct Data {
    int value1;
    float value2;
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Data data;
    data.value1 = 42;
    data.value2 = 3.14;

    // Запись данных в бинарный файл
    ofstream file("data.bin", ios::binary);
    file.write(reinterpret_cast<char*>(&data), sizeof(Data));
    file.close();

    // Чтение данных из бинарного файла
    ifstream inFile("data.bin", ios::binary);
    if (inFile) {
        inFile.read(reinterpret_cast<char*>(&data), sizeof(Data));
        inFile.close();
        cout << "value1: " << data.value1 << endl;
        cout << "value2: " << data.value2 << endl;
    } else {
        cout << "Ошибка при открытии файла." << endl;
    }



   return 0;
}




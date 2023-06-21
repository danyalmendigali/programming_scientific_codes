#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка файлов большого размера с использованием priority_queue:

void sortLargeFile(const string& inputFileName, const string& outputFileName) {
    priority_queue <string, vector<string>, greater <string>> pq;

    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Не удалось открыть входной файл." << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        pq.push(line);
    }

    inputFile.close();

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Не удалось открыть выходной файл." << endl;
        return;
    }

    while (!pq.empty()) {
        outputFile << pq.top() << endl;
        pq.pop();
    }

    outputFile.close();
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    sortLargeFile(inputFileName, outputFileName);

    cout << "Файл успешно отсортирован." << endl;



    return 0;

}


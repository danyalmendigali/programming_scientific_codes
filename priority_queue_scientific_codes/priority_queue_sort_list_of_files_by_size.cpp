#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка списка файлов по размеру с использованием priority_queue:



struct File {
    string name;
    int size;

    File(const string& fileName, int fileSize) : name(fileName), size(fileSize) {}
};

struct FileCompare {
    bool operator()(const File& file1, const File& file2) const {
        return file1.size < file2.size;
    }
};

void sortFilesBySize(const string& inputFileName, const string& outputFileName) {
    priority_queue<File, vector<File>, FileCompare> pq;

    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Не удалось открыть входной файл." << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        istringstream iss(line);
        string fileName;
        int fileSize;
        if (iss >> fileName >> fileSize) {
            pq.push(File(fileName, fileSize));
        }
    }

    inputFile.close();

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Не удалось открыть выходной файл." << endl;
        return;
    }

    while (!pq.empty()) {
        File file = pq.top();
        outputFile << file.name << " " << file.size << endl;
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

    sortFilesBySize(inputFileName, outputFileName);

    cout << "Файлы успешно отсортированы по размеру." << endl;




    return 0;

}



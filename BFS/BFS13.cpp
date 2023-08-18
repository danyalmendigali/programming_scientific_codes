#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

bool bfsBipartiteCheck(const vector<vector<int>>& matrix, int startPoint) {
    int size_matrix = matrix.size();
    vector<int> color(size_matrix, -1); // -1 означает, что вершина ещё не была окрашена

    queue<int> q;
    q.push(startPoint);
    color[startPoint] = 1; // начальная вершина окрашена в цвет 1

    while(!q.empty()) {
        int numFront = q.front();
        q.pop();

        for(int i = 0; i < size_matrix; i++) {
            if(matrix[numFront][i] == 1) {
                // Если смежная вершина не окрашена
                if(color[i] == -1) {
                    color[i] = 1 - color[numFront]; // окрасить в противоположный цвет
                    q.push(i);
                }
                // Если смежная вершина окрашена в тот же цвет, что и текущая вершина
                else if(color[i] == color[numFront]) {
                    return false; // Граф не является двудольным
                }
            }
        }
    }
    return true;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMatrix;
    cout << "Введите размер матрицы: ";
    cin >> sizeMatrix;
    vector<vector<int>> matrix(sizeMatrix);

    cout << "Введите элементы матрицы:" << endl;
    for(int i = 0; i < sizeMatrix; i++) {
        matrix[i].resize(sizeMatrix);
        for(int j = 0; j < sizeMatrix; j++) {
            cin >> matrix[i][j];
        }
    }

    int startVertex = 0;
    if(bfsBipartiteCheck(matrix, startVertex)) {
        cout << "Граф является двудольным." << endl;
    } else {
        cout << "Граф не является двудольным." << endl;
    }

    return 0;
}


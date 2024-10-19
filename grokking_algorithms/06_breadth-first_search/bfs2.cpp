#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Реализация BFS матрицей

void alghormBreadthFirstSearch(vector<vector<int>>& matrix, int startPoint)
{
    int n = matrix.size();ё
    vector <bool> visited(n, 0);

    queue <int> q;
    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        int frontnumber = q.front();
        q.pop();

        cout << "Посещена вершина: " << frontnumber << "\n";

        for(int i = 0; i < n; i++)
        {
            if(matrix[frontnumber][i] >= 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }

}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMatix;
    cout << "Введите размер матрицы: ";
    cin >> sizeMatix;
    vector<vector<int>> myMatrix(sizeMatix);

    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < sizeMatix; i++)
    {
        myMatrix[i].resize(sizeMatix);
        for(int j = 0; j < sizeMatix; j++)
        {
            cin >> myMatrix[i][j];
        }
    }

    int startPoint = 0;
    alghormBreadthFirstSearch(myMatrix, startPoint);









    return 0;
}

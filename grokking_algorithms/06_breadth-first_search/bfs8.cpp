#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

void bfs(VectorVector &matrix, int startNum, int endNum)
{
    int size_matrix = matrix.size();
    vector <int> visited(size_matrix, 0);
    vector <int> prog(size_matrix, -1);

    queue <int> q;
    q.push(startNum);
    visited[startNum]= true;

    while(!q.empty())
    {
        int numfront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numfront << "\n";
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numfront][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
                prog[i] = numfront;
            }
        }
    }
    vector <int> result;

    for(int i = endNum; i != -1; i = prog[i])
    {
        result.push_back(i);
    }

    cout << "Кратчайший путь: ";
    for(int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    cout << "\n";

    cout << "Кратчайший путь = " << result.size() << " шага " << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    VectorVector myMatrix(size_matrix);

    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        myMatrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> myMatrix[i][j];
        }
    }

    int startNum, endNum;
    cout << "Введите начальную точку: ";
    cin >> startNum;
    cout << "Введите последнюю вершину: ";
    cin >> endNum;

    bfs(myMatrix, startNum, endNum);






    return 0;
}

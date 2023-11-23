#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>


// Реализация алгоритма обхода в ширину (BFS) для поиска компонент связности в неориентированном графе


void bfs(VectorVector &myMatrixComponentBFS, int startPointInMyMatrixComponent, vector<int> &componentInMyMatrixComponentBFS)
{
    int sizeMyMatrixComponentBFS = myMatrixComponentBFS.size();
    vector <bool> visitedInMyMatrixComponentBFS(sizeMyMatrixComponentBFS, 0);
    queue <int> queueInMyMatrixComponentBFS;

    queueInMyMatrixComponentBFS.push(startPointInMyMatrixComponent);
    visitedInMyMatrixComponentBFS[startPointInMyMatrixComponent] = true;

    while (!queueInMyMatrixComponentBFS.empty())
    {
        int numFrontInMyMatrixComponentBFS = queueInMyMatrixComponentBFS.front();
        queueInMyMatrixComponentBFS.pop();

        cout << "Посещена вершина: " << numFrontInMyMatrixComponentBFS << "\n";

        for (int i = 0; i < sizeMyMatrixComponentBFS; i++)
        {
            if (myMatrixComponentBFS[numFrontInMyMatrixComponentBFS][i] == 1 && !visitedInMyMatrixComponentBFS[i])
            {
                queueInMyMatrixComponentBFS.push(i);
                visitedInMyMatrixComponentBFS[i] = true;
            }
        }
    }

    for (int i = 0; i < sizeMyMatrixComponentBFS; i++)
    {
        if (visitedInMyMatrixComponentBFS[i])
        {
            componentInMyMatrixComponentBFS.push_back(i);
        }
    }
}

int main()
{
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMyMatrixComponentBFS;
    cout << "Введите размер матрицы: ";
    cin >> sizeMyMatrixComponentBFS;
    VectorVector myMatrixComponentBFS(sizeMyMatrixComponentBFS);

    cout << "Введите матрицу: " << "\n";
    for (int i = 0; i < sizeMyMatrixComponentBFS; i++)
    {
        myMatrixComponentBFS[i].resize(sizeMyMatrixComponentBFS);
        for (int j = 0; j < sizeMyMatrixComponentBFS; j++)
        {
            cin >> myMatrixComponentBFS[i][j];
        }
    }

    VectorVector componentsInMyMatrixComponentBFS;
    vector <bool> visitedInMyMatrixComponentBFS(sizeMyMatrixComponentBFS, false);

    for (int i = 0; i < sizeMyMatrixComponentBFS; i++)
    {
        if (!visitedInMyMatrixComponentBFS[i])
        {
            vector <int> componentInMyMatrixComponentBFS;
            bfs(myMatrixComponentBFS, i, componentInMyMatrixComponentBFS);
            componentsInMyMatrixComponentBFS.push_back(componentInMyMatrixComponentBFS);
            for (int nodeInMyMatrixComponentBFS : componentInMyMatrixComponentBFS)
            {
                visitedInMyMatrixComponentBFS[nodeInMyMatrixComponentBFS] = true;
            }
        }
    }

    cout << "Компоненты связности: \n";
    for (const vector<int> &componentInMyMatrixComponentBFS : componentsInMyMatrixComponentBFS)
    {
        for (int nodeInMyMatrixComponentBFS : componentInMyMatrixComponentBFS)
        {
            cout << nodeInMyMatrixComponentBFS << " ";
        }
        cout << "\n";
    }

    return 0;
}

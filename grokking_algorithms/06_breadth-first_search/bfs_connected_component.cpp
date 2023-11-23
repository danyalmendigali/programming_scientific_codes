#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>


// Реализация алгоритма обхода в ширину (BFS) для поиска компонент связности в неориентированном графе


// myMatrix: ссылку на двумерный вектор (матрицу смежности) представляющий граф.
// startPoint: вершину, с которой начинается обход в ширину.
// component: ссылку на вектор, в который будут добавлены вершины, принадлежащие компоненте связности.

void bfs(VectorVector &myMatrixComponentBFS, int startPointInMyMatrixComponent, vector<int> &componentInMyMatrixComponentBFS)
{
    // size_matrix: размер матрицы смежности (число вершин в графе).
    int sizeMyMatrixComponentBFS = myMatrixComponentBFS.size();

    // visited: вектор булевых значений, используемый для отслеживания посещенных вершин. Изначально все вершины помечаются как не посещенные.
    vector <bool> visitedInMyMatrixComponentBFS(sizeMyMatrixComponentBFS, 0);

    // q: очередь, используемая для выполнения обхода в ширину. В нее помещается startPoint, а соответствующая вершина помечается как посещенная.
    queue <int> queueInMyMatrixComponentBFS;

    queueInMyMatrixComponentBFS.push(startPointInMyMatrixComponent);
    visitedInMyMatrixComponentBFS[startPointInMyMatrixComponent] = true;

    while (!queueInMyMatrixComponentBFS.empty()) // Пока очередь не пуста цикл выполняется
    {
        // На каждой итерации извлекается вершина numfront из очереди q (с помощью q.front() и q.pop())
        int numFrontInMyMatrixComponentBFS = queueInMyMatrixComponentBFS.front();
        queueInMyMatrixComponentBFS.pop();

        // Выводится сообщение о том, что данная вершина посещена.
        cout << "Посещена вершина: " << numFrontInMyMatrixComponentBFS << "\n";

        // Проход по всем вершинам графа (представленным матрицей смежности)
        for (int i = 0; i < sizeMyMatrixComponentBFS; i++)
        {
            // Если текущая вершина i смежна с numfront (то есть имеет ребро с numfront) и при этом она еще не была посещена (!visited[i]
            if (myMatrixComponentBFS[numFrontInMyMatrixComponentBFS][i] == 1 && !visitedInMyMatrixComponentBFS[i])
            {
                queueInMyMatrixComponentBFS.push(i); // Добавляется в очередь
                visitedInMyMatrixComponentBFS[i] = true; // Помечается как посещенная.
            }
        }
    }

    // По завершении обхода в ширину, все вершины, которые были посещены, добавляются в вектор component, который представляет компоненту связности.
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

#include <bits/stdc++.h>
#include <algorithm>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

// Определение компонент связности(BFS)

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


void bfs(vector<vector<ll>> &dp, ll startPoint, ll endPoint)
{
    ll size_dp = dp.sz;
    vector<bool> visited(size_dp, false);
    vector<ll> path(size_dp, -1);
    queue<ll> q;

    q.p(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        ll numFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numFront << "\n";
        FOR(i, 0, size_dp)
        {
            if(dp[numFront][i] != 0 && !visited[i])
            {
                q.push(i);
                visited[i] = true;

                path[i] = numFront;
            }
        }
    }

    vector<ll> pred;
    for(ll i = endPoint; i != -1; i = path[i])
    {
        pred.pb(i);
    }

    cout << "Кратчайший путь: ";
    for(ll i = pred.sz - 1; i >= 0; i--)
    {
        cout  << pred[i] << " ";
    }
    cout << "\n";
    cout << "Минимальное расстояние: " << pred.sz << "\n";
}


signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    ll size_dp;
    cout << "Введите размер матрицы: ";
    cin >> size_dp;

    vector<vector<ll>> dp(size_dp);
    cout << "Заполните матрицу: " << "\n";
    FOR(i, 0, size_dp)
    {
        dp[i].resize(size_dp);
        FOR(j, 0, size_dp)
        {
            cin >> dp[i][j];
        }
    }

    ll startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введиете конечную вершину: ";
    cin >> endPoint;

    bfs(dp, startPoint, endPoint);













    return 0;
}

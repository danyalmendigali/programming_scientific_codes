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

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


void bfs(vector<vector<ll>> dp, ll startPoint)
{
    ll size_dp = dp.sz;
    vector<bool> visited(size_dp, false);
    vector<ll> prog(size_dp, -1);
    queue<ll> q;
    q.p(startPoint);
    visited[startPoint] = true;
    while(!q.empty())
    {
        ll numFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numFront << endl;
        FOR(i, 0, dp.sz)
        {
            if(dp[numFront][i] != 0 && !visited[i])
            {
                q.p(i);
                visited[i] = true;
                prog[i] = numFront;
            }
        }
    }

    cout << endl;
    FOR(endPoint, 0, dp.sz)
    {
        if(endPoint != startPoint)
        {
            vector<ll> result;
            for(ll i = endPoint; i != -1; i = prog[i])
            {
                result.pb(i);
            }
            cout << endl;
            cout << "Кратчайший путь: ";
            for(ll i = result.size() - 1; i >= 0; i--)
            {
                cout << result[i] << " ";
            }
            cout << "\n";
            cout << "Длинна кратчайшего пути: " << result.size() << "\n" << "\n";
        }
    }
    cout << "\n" << "\n";
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    ll size_dp;
    cout << "Введите размер матрицы: ";
    cin >> size_dp;

    vector<vector<ll>> dp(size_dp, vector<ll>(size_dp, 0));
    cout << "Заполните матрицу: " << endl;
    FOR(i, 0, size_dp)
      FOR(j, 0, size_dp) cin >> dp[i][j];


    ll startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;

    bfs(dp, startPoint);











    return 0;
}

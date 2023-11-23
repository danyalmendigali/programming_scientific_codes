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


bool isCycle(vector<vector<ll>>& dp, ll startPoint)
{
    ll size_dp = dp.sz;
    vector<bool> visited(size_dp, false);
    vector<ll> parent(size_dp, -1);
    queue<ll> q;
    q.p(startPoint);
    visited[startPoint] = true;
    while(!q.empty())
    {
        ll numFront = q.front();
        q.pop();
        FOR(i, 0, size_dp)
        {
            if(dp[numFront][i] == 1)
            {
                if(!visited[i])
                {
                    q.p(i);
                    visited[i] = true;

                    parent[i] = numFront;
                }
                else if(parent[numFront] != i)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    ll size_dp;
    cout << "Введите размер матрицы: ";
    cin >> size_dp;

    vector<vector<ll>> dp(size_dp, vector<ll>(size_dp, 0));
    cout << "Заполните матрицу: " << endl;
    FOR(i, 0, size_dp)
      FOR(j, 0, size_dp) cin >> dp[i][j];



    bool cycle = isCycle(dp, 0);
    if(cycle)
    {
        cout << "Граф имеет цикл" << endl;
    }
    else
    {
        cout << "Граф не имеет цикла" << endl;
    }







    return 0;
}

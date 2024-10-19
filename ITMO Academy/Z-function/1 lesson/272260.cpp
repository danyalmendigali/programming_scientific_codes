#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

bool check(const string& s)
{
       int res = 0;
       bool ok = false;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == s[s.sz - 1 - i]){
                     res++;
              }
       }

       if(res == s.sz){
              ok = true;
       }

       return ok;
}


void solve()
{
       string s, news = ""; cin >> s;
       int mx = 0;
       for(int i = 1; i <= s.sz; i++){
              if(check(s.substr(0, i))){
                     mx = i;
              }
       }

       cout << mx << endl;


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}

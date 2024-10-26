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


void solve()
{
       map<string, int> mp;
       map<string, int> mp2;
       string s; cin >> s;

       string new_s = "";
       for(int i = 0; i < s.sz; i++){
              new_s += s[i];
              mp[new_s]++;
       }
       int res = 0;

       string new_s2 = "";
       for(int i = s.sz - 1; i >= 0; i--){
              new_s2 += s[i];
              mp2[new_s2]++;
       }

       for(int i = 0; i < s.sz; i++){
              for(int j = i; j < s.sz; j++){
                     if(mp[s.substr(i, j)] == 1 && mp2[s.substr(i, j)] != 1){
                          res++;
                     }
                     if(mp2[s.substr(i, j)] == 1 && mp[s.substr(i, j)] != 1){
                          res++;
                     }
              }
       }

       cout << res << endl;


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}

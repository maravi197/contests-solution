/**
 *    author:  rahuliitism
 *    created: 12.12.2025 23:13:35
 **/
#include <bits/stdc++.h>
using namespace std;
#define bset(x) __builtin_popcount(x)
#define bsetl(x) __builtin_popcountll(x)
#define pos(x) __builtin_ctz(x)
#define pb push_back
#define pob pop_back
#define mp make_pair
#define scan(v)     \
  for (auto &i : v) \
  cin >> i
#define srt(v) sort(v.begin(), v.end())
#define ma(v) *max_element(v.begin(), v.end())
#define mi(v) *min_element(v.begin(), v.end())
#define srtg(v) sort(v.begin(), v.end(), greater<>())
#define vi(i, n) for (ll i = 0; i < n; i++)
#define vii(i, n) for (ll i = 1; i < n; i++)
#define viii(i, n) for (ll i = 1; i <= n; i++)
#define all(v) v.begin(), v.end()
#define suma(a) accumulate(all(a), 0LL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define lcm(a, b) (a / __gcd(a, b) * b)
#define print(v)                    \
  for (ll i = 0; i < v.size(); i++) \
    cout << v[i] << ' ';            \
  cout << endl;
#define ff first
#define ss second
#define int long long
#define sz(x) (int)(x.size())
#define vp vector<pair<ll, ll>>
#define endl '\n'
using vcl = vector<long long>;
using vcc = vector<char>;
using ll = long long;
#define PI 3.141592653589793238462643383279502884
#define inf 0x3f3f3f3f
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

vector<pair<int,int>>dire={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}};

int32_t main()
{
  cin.tie(0)->sync_with_stdio(false);
  int n;cin>>n;
  vector<vector<int>>dist(n,vector<int>(n,inf));
  queue<pair<int,int>>q;
  q.push({0,0});
  dist[0][0]=0;
  while(!q.empty()){
    auto [row,col]=q.front();
    q.pop();
    for(auto &it:dire){
        int a=row+it.ff;
        int b=col+it.ss;
        if(a>=0 and a<n and b>=0 and b<n and dist[a][b]==inf){
            dist[a][b]=dist[row][col]+1;
            q.push({a,b});
        }
    }
  }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
}

  return 0;
}

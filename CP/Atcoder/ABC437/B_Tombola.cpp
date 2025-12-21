/**
 *    author:  rahuliitism
 *    created: 20.12.2025 17:33:53
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

void Solve()
{ 
  
    
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int h,w,n;cin>>h>>w>>n;
  int a[h][w];
  vi(i,h){
    vi(j,w){
        cin>>a[i][j];
    }
  }
  set<int>b;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    b.insert(x);
  }
  int ans=0;
  int cnt=0;
  vi(i,h){
    for(int j=0;j<w;j++){
         if(b.find(a[i][j])!=b.end())cnt++;
    }
    ans=max(ans,cnt);
    cnt=0;
  }
  cout<<ans<<endl;
  return 0;
}

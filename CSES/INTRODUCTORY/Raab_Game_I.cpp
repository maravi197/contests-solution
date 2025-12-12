/**
 *    author:  rahuliitism
 *    created: 12.12.2025 20:31:49
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
  int n,a,b;cin>>n>>a>>b;
  int aaa=a;
  int bbb=b;
  vector<int>aa,bb;
  viii(i,n)aa.pb(i),bb.pb(i);
  if(!a and !b){
    yes;
     print(aa);
     print(bb);
     return;
  }
  int shouldeq=n-(a+b);
  if(shouldeq<0){
    no;
    return;
  }
  int i=0;
  while(shouldeq>0){
     i++;
     shouldeq--;
  }
  if(i>=n){
    no;
    return;
  }
  int E=n-(a+b);
   vector<int> rem;
   int m=a+b;
    rem.reserve(m);
    for (int x = E + 1; x <= n; ++x) rem.push_back(x);

    
    for (int t = 0; t < m; ++t) {
        aa[E + t] = rem[t];
    }


    for (int t = 0; t < m; ++t) {
        int idx = (t + a) % m;
        bb[E + t] = rem[idx];
    }


  int cha=0,chb=0;
  vi(i,n){
    if(aa[i]>bb[i])cha++;
    else if(aa[i]<bb[i])chb++;
  }
  if(aaa!=cha or bbb!=chb){
    no;
    return;
  }
  yes;
  print(aa);
  print(bb);

    
}

int32_t main()
{
  cin.tie(0)->sync_with_stdio(false);

  ll _ = 1;
  cin >> _;
  while (_--)
  {
    Solve();
  }

  return 0;
}

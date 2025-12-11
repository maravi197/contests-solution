/*
    After 2 Hours of Debugging...

        .-""""-.
       / -   -  \
      |  o   o  |
      |   .-.   |
      |  (___)  |
       \       /
     ___|`-._.-'|___
    /     Rahul     \
    |   Half Alive   |
    \________________/

*/

#include <bits/stdc++.h>
using namespace std;
#define bset(x) __builtin_popcount(x)
#define bsetl(x) __builtin_popcountll(x)
#define pos(x) __builtin_ctz(x)
#define pb push_back
#define pob pop_back
#define mp make_pair
#define scan(v)       \
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
#define print(v)                      \
    for (ll i = 0; i < v.size(); i++) \
        cout << v[i] << ' ';          \
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
    cin.tie(0)->sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    scan(a);
    int i = 0;
    int j = n - 1;
    vector<pair<int, int>> b;
    vi(i, n)
    {
        b.pb({a[i], i + 1});
    }
    srt(b);
    int k = -1;
    int p = -1;
    while (i < j)
    {
        if (b[i].ff + b[j].ff == x)
        {
            k = b[i].ss;
            p = b[j].ss;
            break;
           
        } else if (b[i].ff + b[j].ff > x) j--;
            else i++;
    }
  if(k!=-1){
    cout<<min(k,p)<<" "<<max(k,p)<<endl;
  }else cout<<"IMPOSSIBLE"<<endl;
}

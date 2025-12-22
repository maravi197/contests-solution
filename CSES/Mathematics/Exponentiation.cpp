/**
 *    author:  rahuliitism
 *    created: 22.12.2025 20:21:15
 **/
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

int fun(int a, int b)
{
    if (b == 0)
        return 1;
   int even = fun(a, b / 2);
   even=(even*even)%MOD;
    if (b %2==0)
    {
        
        return even;
    }

    else{
        return (a*even)%MOD;
    }
        
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if(b==0){
            cout<<1<<endl;
            continue;
        }
        cout << fun(a, b) << endl;
    }
    return 0;
}

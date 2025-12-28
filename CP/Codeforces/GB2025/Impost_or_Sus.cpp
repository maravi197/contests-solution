/**
 *    author:  rahuliitism
 *    created: 27.12.2025 20:21:15
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

void Solve()
{
    string s;
    cin >> s;
    int u = count(all(s), 'u');
    if (u == 0)
    {
        cout << 0 << endl;
        return;
    }

    // vector<int> uu;
    // int cnt = 0;
    // vi(i, s.size())
    // {
    //     if (s[i] == 'u')
    //         cnt++;
    //     else
    //     {
    //         uu.pb(cnt);
    //         cnt = 0;
    //     }
    // }
    // if (cnt)
    //     uu.pb(cnt);
    // int ans = 0;
    // vi(i, uu.size())
    // {
    //     ans += cnt / 2;
    // }
    int ans = 0;
    int cnt = 0;
    if (s[0] == 'u')
        ans++;
    if (s[s.size() - 1] == 'u')
        ans++;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == 'u')
            cnt++;
        else
            cnt = 0;
        if (cnt == 2 and s[i] == 'u')
        {
            ans++;
            cnt = 0;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll _ = 1;
    cin >> _;
    while (_--)
    {
        Solve();
    }

    return 0;
}

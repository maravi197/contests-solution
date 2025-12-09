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
    string s, t;
    cin >> s >> t;
    int n = t.size();
    int m = s.size();
    srt(t);
    vector<int> ans(26, 0);
    vector<int> anss(26, 0);
    for (int i = 0; i < n; i++)
    {
        ans[t[i] - 'a']++;
    }
    for (int i = 0; i < m; i++)
    {
        anss[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (anss[i] > ans[i])
        {
            cout << "Impossible" << endl;
            return;
        }
    }

    vector<vector<int>> ar(m + 1, vector<int>(26, 0));
    for (int id = m - 1; id >= 0; --id)
    {
        for (int j = 0; j < 26; j++)
            ar[id][j] = ar[id + 1][j];
        ar[id][s[id] - 'a'] += 1;
    }

    string req;
    req.reserve(n);
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 0; j < 26; ++j)
        {
            if (ans[j] == 0)
                continue;
            ans[j] -= 1;
            int iii = k;
            char ch = (char)('a' + j);
            if (k < m && ch == s[k])
                iii = k + 1;
            bool rh = true;
            for (int jjj = 0; jjj < 26; ++jjj)
            {
                if (ans[jjj] < ar[iii][jjj])
                {
                    rh = false;
                    break;
                }
            }

            if (rh)
            {
                req.push_back(ch);
                k = iii;
                ok = true;
                break;
            }
            else
            {

                ans[j] += 1;
            }
        }
    }

    cout << req << endl;
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

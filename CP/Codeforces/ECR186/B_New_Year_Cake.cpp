/**
 *    author:  Vermax
 *    created: 29.12.2025 20:26:51
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
    int a, b;
    cin >> a >> b;
    vector<int> cos;
    for (int i = 1; i <= 1e6; i *= 2)
    {
        cos.pb(i);
    }
    //   int ans=lower_bound(all(cos),a)-cos.begin();
    //   int anss=min(ans,lower_bound(all(cos),b)-cos.begin());
    //   ans=min(ans,anss);
    //   if(cos[ans]==min(a,b))cout<<ans<<endl;
    //   else cout<<ans-1<<endl;

    int ans = 0;
    int sa = a, da = b;
    int size = 1;
    int anss = 0;

    while (true)
    {
        if (anss % 2 == 0)
        {
            if (sa < size)
                break;
            sa -= size;
        }
        else
        {
            if (da < size)
                break;
            da -= size;
        }

        anss++;
        size <<= 1;
    }

    ans = max(ans, anss);

    sa = a, da = b;
    size = 1;
    anss = 0;

    while (true)
    {
        if (anss % 2 == 0)
        {
            if (da < size)
                break;
            da -= size;
        }
        else
        {
            if (sa < size)
                break;
            sa -= size;
        }

        anss++;
        size <<= 1;
    }

    ans = max(ans, anss);

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

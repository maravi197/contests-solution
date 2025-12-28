/**
 *    author:  Vermax
 *    created: 28.12.2025 17:18:02
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
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<char>>room(n,vector<char>(m));
    vi(i,n){
        vi(j,m){
            cin>>room[i][j];
        }
    }

    vector<pair<int, int>> dire = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<int>> visit(n + 1, vector<int>(m + 1, 0));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (room[i][j] == '.' and !visit[i][j])
            {
                visit[i][j] = 1;
                queue<pair<int, int>> pq;
                pq.push({i, j});
                while (!pq.empty())
                {
                    for (auto &it : dire)
                    {
                        int ii = pq.front().ff + it.ff;
                        int jj = pq.front().ss + it.ss;
                        if (ii >= 0 and ii < n and jj >= 0 and jj < m)
                        {
                            if (room[ii][jj] == '.' and !visit[ii][jj])
                            {
                                pq.push({ii, jj});
                                visit[ii][jj] = 1;
                               
                            }
                        
                        }
                    }
                    pq.pop();
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

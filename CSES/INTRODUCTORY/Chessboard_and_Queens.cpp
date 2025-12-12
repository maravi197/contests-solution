/**
 *    author:  rahuliitism
 *    created: 12.12.2025 19:23:16
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

int ans=0;
bool rsafe(int row,vector<string>&chess){
    for(int cl=0;cl<8;cl++){
        if(chess[row][cl]=='Q')return false;
    }
    return true;
}
bool csafe(int cl,vector<string>&chess){
    for(int row=0;row<8;row++){
        if(chess[row][cl]=='Q')return false;
    }
    return true;
}
bool diagsafe(int row,int cl,vector<string>&chess){
    int i=row;int j=cl;
    int ii=row;int jj=cl;
    while(row>=0 and cl>=0){
        if(chess[row][cl]=='Q')return false;
        row--;
        cl--;
    }
    while(i<8 and j<8){
        if(chess[i][j]=='Q')return false;
        i++;
        j++;
    }
  int iii=ii;int jjj=jj;
  while(ii<8 and jj>=0){
    if(chess[ii][jj]=='Q')return false;
    ii++;
    jj--;
  }
  while(iii>=0 and jjj<8){
    if(chess[iii][jjj]=='Q')return false;
    iii--;
    jjj++;
  }
    return true;
}

void place(int row,vector<string>&chess){
     if(row==8){
        ans++;
        return;
     }
     for(int cl=0;cl<8;cl++){
        if(chess[row][cl]=='.' and rsafe(row,chess) and csafe(cl,chess) and diagsafe(row,cl,chess)){
            chess[row][cl]='Q';
            place(row+1,chess);
            chess[row][cl]='.';
        }
     }
}

int32_t main()
{
  cin.tie(0)->sync_with_stdio(false);

  vector<string>chess(8);
  for(auto &it:chess){
       cin>>it;
  }
  place(0,chess);

 cout<<ans;
  return 0;
}

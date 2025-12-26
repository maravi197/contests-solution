
#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
vector<int>dp(1e6+5,-1);

int fun(int n,int tar,vector<int>&a){
     if(tar==0)return 1;
     if(tar<0)return 0;
     if(dp[tar]!=-1)return dp[tar];
     int ans=0;
     for(int j=0;j<n;j++){
        ans+=fun(n,tar-a[j],a);
     }
     return dp[tar] = ans%mod;
}

int32_t main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   cout<< fun(n,x,a);

    return 0;
}
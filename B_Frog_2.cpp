#include<bits/stdc++.h>
using namespace std;
#define el "\n"
#define int long long
#define all(n) n.begin(),n.end()
#define rll(n) n.rbegin(),n.rend()
#define vi vector<int>
#define pb push_back
#define forc(i, n) for(int i=0; i<n; i++)
#define ff first
#define ss second
int inf=1e10;

int dp[100005];
int fun(vector<int>&v, int k, int i)
{
    if(i == 0)return 0;
    if(i == 1)return abs(v[i]-v[i-1]);
    if(dp[i] != -1)return dp[i];
    int ans=INT_MAX;
    for(int j=1; j<=k; j++)
    {
        if(i-j >= 0) ans=min(ans, fun(v, k, i-j) + abs(v[i]-v[i-j]));
    }
    return dp[i]=ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    // vector<int>dp(1e5+5, inf);
    int n,k;
    cin>>n>>k;
    vi v(n);
    forc(i, n)cin>>v[i];


    // vector<int>a(n, inf);

    // a[0]=0;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=1; j<=k; j++)
    //     {
    //         if(i-j >= 0)a[i]=min(a[i], a[i-j]+abs(v[i]-v[i-j]));
    //     }
    // }

    // cout<<a[n-1]<<el;
    cout<<fun(v, k, n-1);
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
     solve();
}
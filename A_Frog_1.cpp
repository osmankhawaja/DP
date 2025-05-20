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
int dp[100005];

int fun(vector<int>&v, int i)
{
    if(i == 0)return 0;
    if(i == 1)return abs(v[i]-v[i-1]);
    if(dp[i] != -1)return dp[i];
    return dp[i]=min(fun(v, i-1)+abs(v[i]-v[i-1]), fun(v, i-2)+abs(v[i]-v[i-2]));
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    vi v(n);
    forc(i, n)cin>>v[i];
    cout<<fun(v, n-1)<<el;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
     solve();
}
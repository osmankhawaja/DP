class Solution {
int dp[100005];
int ok(vector<int>&v, int sum)
{
    if(sum == 0)return 0;
    if(dp[sum] != -1)return dp[sum];
    int ans=INT_MAX;
    for(int i=0; i<v.size(); i++)
    {
        if(sum-v[i] >= 0)
         ans=min(ans+0LL, ok(v, sum-v[i])+1LL);
    }
    return dp[sum]=ans;
}
public:
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int ans=ok(coins, amount);
        return (ans == INT_MAX ? -1 : ans);
    }
};

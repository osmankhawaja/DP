class Solution {
int dp[305][5005];
int ok(int ind, vector<int>&v, int sum)
{
    if(sum == 0)return 1;
    if(ind < 0)return 0;
    if(dp[ind][sum] != -1)return dp[ind][sum];

    int ans=0;
    for(int i=0; i<=sum; i+=v[ind])
    {
          ans+=ok(ind-1, v, sum-i);
    }
    return dp[ind][sum]=ans;
}
public:
    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        return ok(coins.size()-1, coins, amount);
    }
};

class Solution {
int dp[3000];
int lis(vector<int>&v, int i)
{
    if(i == 0)return 1;
    if(dp[i] != -1)return dp[i];
    int ans=1;
    for(int j=0; j<i; j++)
    {
        if(v[i] > v[j])ans=max(ans, lis(v, j)+1);
    }
    return dp[i]=ans;
}
public:
    int lengthOfLIS(vector<int>& nums) {
       memset(dp, -1, sizeof(dp));
       int ans=0;
       for(int j=0; j<nums.size(); j++)
       {
        ans=max(ans, lis(nums, j));
       }
       return ans;
    }
};

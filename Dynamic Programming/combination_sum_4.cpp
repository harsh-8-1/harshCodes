class Solution {
public:
    int helper(vector<int>& nums,int n,vector<int>&dp, int target)
    {
        if(dp[target]>-1){return dp[target];}
        int ans = 0;
        for(auto i:nums)
        {
            if(i<=target){ans+=helper(nums,n,dp,target-i);}
        }
        dp[target]=ans;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<int>dp(target+1,-1);
        dp[0]=1;
        return helper(nums,n,dp,target);
      
    }

};

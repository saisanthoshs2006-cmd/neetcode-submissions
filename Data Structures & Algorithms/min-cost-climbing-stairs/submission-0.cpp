class Solution {
public:
    int func(vector<int>& nums,vector<int>& dp,int n){
        if(n==0) return 0;
        if(n==1) return 0;

        if(dp[n] != -1) return dp[n];

        dp[n] = min(func(nums,dp,n-1)+nums[n-1],func(nums,dp,n-2)+nums[n-2]);
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return func(nums,dp,n);
    }
};

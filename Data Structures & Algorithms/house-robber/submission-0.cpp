class Solution {
public:
    int func(vector<int>& nums,vector<int>& dp,int n){
        if(n==0) return 0;
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);

        if(dp[n] != -1) return dp[n];

        dp[n] = max(func(nums,dp,n-1),func(nums,dp,n-2)+nums[n-1]);

        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return func(nums,dp,n);
    }
};

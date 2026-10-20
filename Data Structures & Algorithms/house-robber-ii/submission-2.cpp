class Solution {
public:
    int func(vector<int>& nums,vector<int>& dp,int start,int n){
        if(n<=start) return 0;
        if(n == start+1) return nums[start];

        if(dp[n] != -1) return dp[n];

        dp[n] = max(func(nums,dp,start,n-1),func(nums,dp,start,n-2)+nums[n-1]);

        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 1) return nums[0];
        vector<int> dp1(n+1,-1);
        vector<int> dp2(n+1,-1);

        int l = func(nums,dp1,0,n-1);
        int f = func(nums,dp2,1,n);

        return max(l,f);

    }
};

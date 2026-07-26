class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=1;
        int n=nums.size();
        int r=1;
        vector<int> ans(n,1);

        
        for(int i=0;i<n;i++){
            ans[i]=l*ans[i];
            l=l*nums[i];

            ans[n-i-1]=r*ans[n-i-1];
            r=r*nums[n-i-1];    
        }

        return ans;
    }
};

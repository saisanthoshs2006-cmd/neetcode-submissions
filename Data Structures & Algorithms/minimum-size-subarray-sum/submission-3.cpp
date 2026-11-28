class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int maxi=INT_MAX;
        int l=0;
        int n=nums.size();

        for(int r=0;r<n;r++){
            sum = sum + nums[r];
            while(sum>=target){
                maxi = min(maxi,r-l+1);
                sum = sum-nums[l];
                l++;
            }
        }
        if(maxi==INT_MAX){
            return 0;
        }else{
            return maxi;
        }
    }
};
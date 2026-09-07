class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int missing=1;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && missing == nums[i]){
                missing++;
            }
        }
        return missing;
    }
};
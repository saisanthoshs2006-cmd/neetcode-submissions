class Solution {
public:
void func(int idx,vector<int>& nums,vector<int>& ans,vector<vector<int>>& fans,int target){
        if(target==0){
            fans.push_back(ans);
            return;
        }
        if(target < 0 || idx==nums.size()) return;

        ans.push_back(nums[idx]);
        func(idx,nums,ans,fans,target-nums[idx]);
        ans.pop_back();
        func(idx+1,nums,ans,fans,target);

    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> fans;
        vector<int> ans;

        func(0,nums,ans,fans,target);
        return fans;
    }
};

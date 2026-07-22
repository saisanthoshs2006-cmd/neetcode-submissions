class Solution {
public:
    void func(int i,vector<vector<int>>& fans,vector<int>& ans,vector<int>& nums, int target){
        if(target==0){
            fans.push_back(ans);
            return;
        }
        if(i==nums.size()){
            return;
        }
        if(nums[i]<=target){
            ans.push_back(nums[i]);
            func(i,fans,ans,nums,target-nums[i]);
            ans.pop_back();
        }

        func(i+1,fans,ans,nums,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> fans;
        vector<int> ans;
        func(0,fans,ans,nums,target);
        return fans;
    }
};

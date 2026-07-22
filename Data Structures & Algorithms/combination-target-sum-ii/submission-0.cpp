class Solution {
public:
    void func(int idx,vector<vector<int>>& fans,vector<int>& ans,vector<int>& nums,int target){
        if(target==0){
            fans.push_back(ans);
            return;
        }
        if(idx==nums.size()){
            return;
        }
        
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]) continue;

            if(nums[i]<=target){
                ans.push_back(nums[i]);
                func(i+1,fans,ans,nums,target-nums[i]);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> fans;
        vector<int> ans;
        func(0,fans,ans,nums,target);
        return fans;

    }
};

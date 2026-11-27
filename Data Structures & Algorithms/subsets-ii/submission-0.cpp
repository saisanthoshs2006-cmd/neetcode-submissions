class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> fans;
        vector<int> ans;

        func(0,nums,ans,fans);
        return fans;
    }
    void func(int idx,vector<int>& nums,vector<int>& ans,vector<vector<int>>& fans){
         
            fans.push_back(ans);
            

        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]) continue;

            ans.push_back(nums[i]);
            func(i+1,nums,ans,fans);
            ans.pop_back();
        }
    }
};

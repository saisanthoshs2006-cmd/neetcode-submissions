class Solution {
public:
    void func(int idx,vector<int>& nums,vector<int>& ans,vector<vector<int>>& fans){
        if(idx==nums.size()){
            fans.push_back(ans);
            return;
        }

        ans.push_back(nums[idx]);
        func(idx+1,nums,ans,fans);
        ans.pop_back();
        func(idx+1,nums,ans,fans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> fans;
        vector<int> ans;

        func(0,nums,ans,fans);
        return fans;
    }
};

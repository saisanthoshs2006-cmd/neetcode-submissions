class Solution {
public:
    void func(int i,vector<vector<int>>& fans,vector<int>& ans,vector<int>& nums){
        if(i==nums.size()){
            fans.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        func(i+1,fans,ans,nums);
        ans.pop_back();

        func(i+1,fans,ans,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> fans;
        vector<int> ans;
        int n=nums.size();
        func(0,fans,ans,nums);
        return fans;
    }
};

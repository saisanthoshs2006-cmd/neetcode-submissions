class Solution {
public:
 void func(int idx,vector<int>& nums,vector<vector<int>>& fans){
        if(idx==nums.size()){
            fans.push_back(nums);
            return;
        }
unordered_set<int> st;
        for(int i=idx;i<nums.size();i++){

        if(st.count(nums[i])) continue;
        st.insert(nums[i]);
            swap(nums[i],nums[idx]);
            func(idx+1,nums,fans);
            swap(nums[i],nums[idx]);
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> fans;
       // no ans needed 
       sort(nums.begin(),nums.end());
        func(0,nums,fans);
        return fans;
    }
};
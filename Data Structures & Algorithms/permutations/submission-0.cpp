class Solution {
public:
 void func(int idx,vector<int>& nums,vector<vector<int>>& fans){
        if(idx==nums.size()){
            fans.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++){

        
            swap(nums[i],nums[idx]);
            func(idx+1,nums,fans);
            swap(nums[i],nums[idx]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        // permutation is nothing but swaping with loops
        vector<vector<int>> fans;
       // no ans needed 

        func(0,nums,fans);
        return fans;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st;
        for(auto x:nums){
            st.insert(x);
        }

        int longest = 1;

        for(auto it:st){
            if(!st.count(it-1)){
                auto x = it;
                int cnt = 1;

                while(st.count(x+1)){
                    x = x+1;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(strs.empty()) return "";
        string pre = strs[0];

        for(int i=1;i<n;i++){
            while(strs[i].find(pre) != 0){
                pre.pop_back();

                if(strs.empty()) return "";
            }
        }
        return pre;
    }
};
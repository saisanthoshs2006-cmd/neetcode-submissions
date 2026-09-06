class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string prev = strs[0];

        for(int i=1;i<n;i++){
            while(strs[i].find(prev) != 0){
                prev.pop_back();

                if(prev.empty()) return "";
            }
        }
        return prev;
    }
};
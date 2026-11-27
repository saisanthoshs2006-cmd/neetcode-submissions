class Solution {
public:
     void func(int n,int k,int i,vector<vector<int>>& fans,vector<int>& ans){
        if(k==0){
            fans.push_back(ans);
            return;
        }
        if(i>n) return;
         ans.push_back(i);
        func(n,k-1,i+1, fans, ans);

        // Backtrack
        ans.pop_back();

        // Not pick
        func(n,k,i + 1, fans, ans);
     }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ans;
        vector<vector<int>> fans;
        func(n,k,1,fans,ans);
        return fans;
    }
};
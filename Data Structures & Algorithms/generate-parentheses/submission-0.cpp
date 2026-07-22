class Solution {
public:
    void func(string s,vector<string>& ans,int op,int cl,int n){
        if(op+cl==2*n){
            ans.push_back(s);
            return;
        }

        if(op<n){
            func(s+"(",ans,op+1,cl,n);
        }
        if(cl<op){
            func(s+")",ans,op,cl+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func("",ans,0,0,n);
        return ans;
    }
};

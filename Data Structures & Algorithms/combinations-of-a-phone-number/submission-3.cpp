class Solution {
public:
void func(int idx,string digits,string com[],vector<string>& ans,string temp){
    if(idx==digits.size()){
        ans.push_back(temp);
        return;
    }

    int num = digits[idx]-'0';

    for(auto ch:com[num]){
        func(idx+1,digits,com,ans,temp+ch);
    }
}
    vector<string> letterCombinations(string digits) {
        
        string com[]=  {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.empty()) return ans;
        func(0,digits,com,ans,"");
        return ans;
        
    }
};

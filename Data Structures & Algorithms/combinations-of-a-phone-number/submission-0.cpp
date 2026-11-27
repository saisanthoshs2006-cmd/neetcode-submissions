class Solution {
public:
    void func(int idx,string digits,string com[],vector<string>& fans, string s){
        if(idx == digits.size()){
            fans.push_back(s);
            return;
        }

        int num = digits[idx]-'0';

        for(auto ch:com[num]){
            func(idx+1,digits,com,fans,s+ch);
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        string com[] = {"","","abc","def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        // list 

        vector<string> fans;
        string s="";
        func(0,digits,com,fans,s);
        return fans;
    }
};

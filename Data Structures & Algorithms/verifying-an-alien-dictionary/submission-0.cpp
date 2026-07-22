class Solution {
public:
    bool isAlienSorted(vector<string>& word, string order) {
        int orderlist[26]={0};
        for(int i=0;i<order.size();i++){
            orderlist[order[i]-'a'] = i;
        }

        for(int i=0;i<word.size()-1;i++){
            string w1 = word[i];
            string w2 = word[i+1];

            int j=0;
            for(;j<w1.size();j++){
                if(j == w2.size()){
                    return false;
                }

                if(w1[j] != w2[j]){
                    if(orderlist[w1[j]-'a'] > orderlist[w2[j]-'a']) return false;
                    break;
                }
            }
        }
        return true;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // take string map with vector
        unordered_map<string,vector<string>> mp;

        for(auto s:strs){
            vector<int> fre(26,0);

            for(auto c:s){
                fre[c-'a']++;
            }

            string key = "";
            for(auto x:fre){
                key += to_string(x) + '#';
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};

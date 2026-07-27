class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();

        vector<int> fre1(26,0);
        vector<int> fre2(26,0);

        if(n>m) return false;

        for(int i=0;i<n;i++){
            fre1[s1[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            fre2[s2[i]-'a']++;
        }

        if(fre1 == fre2) return true;

        for(int i=n;i<m;i++){
            fre2[s2[i]-'a']++;

            fre2[s2[i-n]-'a']--;


            if(fre1 == fre2) return true;
        }
        return false;
    }
};

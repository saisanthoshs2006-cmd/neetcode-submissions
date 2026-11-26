class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        int l=0;
        int n=people.size();
        int r=n-1;
        int cnt=0;

        while(l<=r){
            if(people[l]+people[r]<=limit){
                cnt++;
                l++;
                r--;
            }else{
                r--;
                cnt++;
            }
        }
        return cnt;
    }

    // 1 2 4 5 

    // 1 2 2 3 3 
};
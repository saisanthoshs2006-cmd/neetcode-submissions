class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num1=-1,num2=-1,cnt1=0,cnt2=0;

        for(auto num:nums){
            if(num == num1) cnt1++;
            else if(num == num2) cnt2++;
            else if(cnt1==0){
                num1 = num;
                cnt1 = 1;
            }else if(cnt2 == 0){
                num2 = num;
                cnt2 = 1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        int c1=0,c2=0;

        for(auto it:nums){
            if(it == num1) c1++;
            else if(it == num2) c2++;
        }

        vector<int> res;
        if(c1>n/3) res.push_back(num1);
        if(c2>n/3) res.push_back(num2);

        return res;
    }
};
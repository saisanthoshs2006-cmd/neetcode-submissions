class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(auto i:nums){
            mp[i]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        // loop

        for(auto it:mp){
            pq.push({it.second,it.first});
            // fre,nums
            if(pq.size()>k) pq.pop();
        }

        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second); // num
           // sec means it.first
            pq.pop();
        }
        return ans;

    }
};

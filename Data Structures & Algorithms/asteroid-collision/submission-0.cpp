class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> v;

        for(auto& a:asteroids){
            while(!v.empty() && a < 0 && v.back()>0)
            // Keep fighting as long as a is left-moving and the stack's top is right-moving.
            {
                int diff = a+v.back();
                if(diff<0){
                    v.pop_back();
                }else if(diff > 0){
                    a=0;
                }else{
                    a=0;
                    v.pop_back();
                }
            }
            if(a!=0){
                v.push_back(a);
            }
        }
        return v;
    }
};
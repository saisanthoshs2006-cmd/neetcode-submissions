class Solution {
public:
    int canCompleteCircuit(vector<int>& gain, vector<int>& cost) {
        int tcost = 0;
        int tgain=0;

        int total=0;
        int start=0;
        for(int i=0;i<gain.size();i++){
             tcost += cost[i];
             tgain += gain[i];

             total += gain[i] - cost[i];

            if(total<0){
                total=0;
                start = i+1;
            }
        }
            if(tcost>tgain) return -1;
        
        return start;
    }
};

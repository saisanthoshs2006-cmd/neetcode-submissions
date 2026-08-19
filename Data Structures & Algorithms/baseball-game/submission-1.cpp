class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        for(string c:op){
            if(c=="C"){
                st.pop();
            }else if(c=="D"){
                st.push(2 * st.top());
            }else if(c=="+"){
                int top=st.top();
                st.pop();
                int sec = st.top();
                st.push(top);
                st.push(sec+top);
            }else{
                st.push(stoi(c));
            }
        }

        stack<int> temp=st;
        int sum=0;
        while(!temp.empty()){
            sum = sum + temp.top();
            temp.pop();
        }
        return sum;
    }
};
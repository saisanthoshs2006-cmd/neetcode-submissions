class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()){
            minst.push(val);
        }
        else{
                minst.push(min(val,minst.top()));
            }
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        int val = st.top();
        return val;
    }
    
    int getMin() {
        return minst.top();
    }
};

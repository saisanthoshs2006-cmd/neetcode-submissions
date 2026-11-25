class MinStack {
public:
    stack<int> st;
    stack<int> stt;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(stt.empty()){
            stt.push(val);
            
        }else{
            stt.push(min(stt.top(),val));
        }
    }
    
    void pop() {
        st.pop();

       stt.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stt.top();
    }
};

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    //     int n =heights.size();

    //  vector<int> nse(n);
    //  vector<int> pse(n);

    //  stack<int> st;

    //  for(int i=n-1;i>=0;i--){
    //     while(!st.empty() && heights[st.top()]>=heights[i]){
    //         st.pop();
    //     }

    //     nse[i] = st.empty() ? n:st.top();
    //     st.push(i);
    //  }

    //  // pop remaining 

    //  while(!st.empty()) st.pop();

    //  for(int i=0;i<n;i++){
    //     while(!st.empty() && heights[st.top()]>=heights[i]){
    //         st.pop();
    //     }

    //     pse[i] = st.empty() ? -1:st.top();
    //     st.push(i);
    //  }

    //  int maxi=0;
    //  for(int i=0;i<n;i++){
    //     int wid = nse[i]-pse[i]-1;
    //     maxi = max(maxi,heights[i]*wid);
    //  }
    //  return maxi;

    int n =heights.size();

    vector<int> nse(n,0);
    vector<int> pse(n,0);
    stack<int> st;

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }

        nse[i] = st.empty() ? n:st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i=0;i<n;i++){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }

        pse[i] = st.empty() ? -1:st.top();
        st.push(i);
    }
    int maxi=0;

    for(int i=0;i<n;i++){
        int wid = nse[i]-pse[i]-1;
        maxi = max(maxi,wid*heights[i]);
    }
    return maxi;
    }
};

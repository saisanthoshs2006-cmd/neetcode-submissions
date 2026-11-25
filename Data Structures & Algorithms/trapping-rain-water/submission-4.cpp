class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int container = 0;
        int ll=0;
        int rr=0;

        int r=n-1;
        while(l<r){
            if(height[l]<height[r]){
                ll = max(ll,height[l]);
                container += ll-height[l];
                l++;
            }else{
                rr = max(rr,height[r]);
                container += rr-height[r];
                r--;
            }
        }
        return container;
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int n=height.size();
        int r=n-1;
        int water = 0;
        int lmax=0,rmax=0;

        while(l<r){
            if(height[l]<height[r]){
                lmax = max(height[l],lmax);
                water += lmax-height[l];
                l++;
            }else{
                rmax = max(height[r],rmax);
                water += rmax-height[r];
                r--;
            }
        }
        return water;
    }
};

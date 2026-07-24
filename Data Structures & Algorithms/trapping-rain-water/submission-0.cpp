class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int leftmax=0,rightmax=0,water=0;

        while(l<r){
            if(height[l]<height[r]){
                leftmax = max(leftmax,height[l]);
                water += leftmax - height[l];
                l++;
            }else{
                rightmax = max(rightmax,height[r]);
                water += rightmax - height[r];
                r--;
            }
        }
        return water;
    }
};

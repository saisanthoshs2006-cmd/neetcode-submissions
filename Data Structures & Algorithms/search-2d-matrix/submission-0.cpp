class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row=mat.size();
        int col=mat[0].size();

        int low=0;
        int high=row*col-1;

        while(low<=high){
            int mid = (low+high)/2;

            int n=mid/col;
            int m=mid%col;

            if(mat[n][m]==target) return true;

            else if(mat[n][m] < target) low = mid+1;

            else high = mid-1;
        }

        return false;
        
    }
};

class Solution {
private:
    void mergesort(vector<int>& arr,int l,int r){
        if(l>=r) return;
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    void merge(vector<int>& arr,int l,int m,int r){
        int i=l,j=m+1;
        vector<int> temp;

        while(i<=m && j<= r){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }else{
                temp.push_back(arr[j++]);
            }
        }

        while(i<=m) temp.push_back(arr[i++]);
        while (j <= r) temp.push_back(arr[j++]);

        for(int i=l;i<=r;i++){
            arr[i] = temp[i-l];
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};
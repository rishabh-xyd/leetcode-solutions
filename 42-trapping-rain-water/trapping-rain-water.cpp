class Solution {
public:
    int trap(vector<int>& arr) {
        int left=0;
        int right=arr.size()-1;
        int lmax=0;
        int rmax=0;
        int res=0;
        while(left<right){
            if(arr[left]<arr[right]){
                if(arr[left]>lmax) lmax=arr[left];
                else res+=lmax-arr[left];
                left++;
            }
            else{
                if(arr[right]>rmax) rmax=arr[right];
                else res+=rmax-arr[right];
                right--;
            }

        }
        return res;
    }
};
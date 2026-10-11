class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int i=0;
        for(int num:nums){
            i++;
            if(n%i==0){
                res=res+(num*num);
            }
        }
        return res;
    }
};
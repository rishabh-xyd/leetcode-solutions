class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return n;
        int c=2;
        for(int i=2;i<n;i++){
            if(nums[i]!=nums[c-2]){
                nums[c]=nums[i];
                c++;
            }
        }
        return c;
    }
};
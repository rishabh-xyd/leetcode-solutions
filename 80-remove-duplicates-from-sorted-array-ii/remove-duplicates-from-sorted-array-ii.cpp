class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(i<2||nums[i]!=nums[c-2]){
                nums[c]=nums[i];
                c++;
            }
        }
        return c;
    }
};
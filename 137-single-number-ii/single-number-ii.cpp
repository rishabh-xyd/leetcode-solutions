class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=1;i<nums.size();i+=3){
            if(nums[i]!=nums[i-1])
            break;
        }
        return nums[i-1];
    }
};
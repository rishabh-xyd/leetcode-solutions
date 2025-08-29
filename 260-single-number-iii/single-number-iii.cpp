class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int i,j=0;
        for(i=1;i<nums.size();){
            if(nums[i-1]==nums[i]) i+=2;
            else{
                res.push_back(nums[i-1]);
                j++;
                i++;
            }
        }
        if(j==1) res.push_back(nums[i-1]);
        return res;
    }
};
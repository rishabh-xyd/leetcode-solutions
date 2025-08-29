class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if((i<n-1 && nums[i]==nums[i+1])|| (i>=1 && nums[i]==nums[i-1])) continue;
            else 
            res.push_back(nums[i]);
        }
        return res;
    }
};
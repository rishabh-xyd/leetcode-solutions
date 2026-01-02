class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
         unordered_set<int> res;
         int ans;
         for(int num:nums){
            if(res.contains(num)){
            ans=num;
            break;
            } 
            else res.insert(num);
         }
        return ans;
    }
};
class Solution {
    public int sumFourDivisors(int[] nums) {
        int res=0;
        int len=nums.length;
        for(int i=0;i<len;i++)
        {
            int n=nums[i]/2;
            int c=0;
            int sum=nums[i]+1;
            while((n)>1)
            {
                if(nums[i]%n==0)
                {
                    c++;
                    sum+=n;
                }
                if(c==3) break;
                    n--;
            }

            if(c==2)
            res+=sum;
        }

        return res;
    }
}
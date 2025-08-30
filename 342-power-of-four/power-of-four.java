class Solution {
    public boolean isPowerOfFour(int n) {
       if(n==0)
       return false;
       
        int i;
        for(i=0;i<32;i++)
        {
            if(((n>>i)&1)==1)
            break;
        }

        if(i%2!=0)
        return false;

        if((n>>i)==1)
        return true;
        else
        return false;
    }
}
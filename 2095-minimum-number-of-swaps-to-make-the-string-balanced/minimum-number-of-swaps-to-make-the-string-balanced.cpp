class Solution {
public:
    int minSwaps(string s) {
        int n=s.size();
        int c=0;
        for(char ch:s){
            if(ch=='[') c++;
            else if(c>0) c--;
        }
        return (c+1)/2;
    }
};
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int maxdig=-1;
        int maxarea=-1;
        for(int i=0;i<n;i++){
            int a=dimensions[i][0];
            int b=dimensions[i][1];
        
            int dig=a*a+b*b;
            int area=a*b;

            if(dig>maxdig||dig==maxdig&&area>maxarea){
                maxdig=dig;
                maxarea=area;
            }
        }
        return maxarea;
    }
};
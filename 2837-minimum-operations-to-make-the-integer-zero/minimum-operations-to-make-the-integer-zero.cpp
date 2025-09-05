class Solution {
public:
    int count(long long x) {
        int c = 0;
        while (x > 0) {
            x &= (x - 1);  
            c++;
        }
        return c;
    }

    int makeTheIntegerZero(long long num1, long long num2) {
        for (int k = 1; k <= 60; ++k) {
            long long x = num1 - k * num2;
            if (x < 0) continue;  
            if (count(x) <= k && k <= x) return k;
        }
        return -1;
    }
};


class Solution {
    public boolean reorderedPowerOf2(int n) {
        String target = sortDigits(n);
        
        for (int i = 1; i > 0; i <<= 1) { // stops when i overflows to negative
            if (target.equals(sortDigits(i))) {
                return true;
            }
        }
        return false;
    }

    private String sortDigits(int num) {
        char[] digits = String.valueOf(num).toCharArray();
        Arrays.sort(digits);
        return new String(digits);
    }
}

class Solution {
    public int searchInsert(int[] arr, int target) {
        int pos = arr.length;
        int start=0;
        int end = arr.length-1;

        while(start<=end)
        { 
            int mid = start+(end-start)/2;
            if(arr[mid]==target)
            return mid;
            else if(arr[mid]<target)
            start = mid+1;
            else {
                pos=mid;
                end=mid-1;
            }
        }
        return pos;
    }
}
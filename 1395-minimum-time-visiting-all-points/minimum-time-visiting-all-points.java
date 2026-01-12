class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int total=0;
        for(int x=1;x<points.length;x++){
            int diffx=Math.abs(points[x][0]-points[x-1][0]);
            int diffy=Math.abs(points[x][1]-points[x-1][1]);
            int common=Math.abs(diffx-diffy)+Math.min(diffx,diffy);
            total+=common;

        }   
        return total;

    }
}
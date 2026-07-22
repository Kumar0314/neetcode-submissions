class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
      //  n=n2 here

      int n=grid.length;
      long totSum=0; 
      long totSqSum=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           totSum+=grid[i][j];
           totSqSum+=1L*grid[i][j]*grid[i][j];
        }
      }
       
       long sqSum=(long)(n*n)*(n*n+1)*(2*n*n+1)/6;

       long sum=(long)(n*n)*(n*n+1)/2;

       long diff=totSum-sum; //a-b

       long sqDiff=totSqSum-sqSum;

       long add=sqDiff/diff; //a+b
       
       long a=(diff+add)/2;

       long b=add-a;

       return new int []{(int)a,(int)b};
 
       
    }
}
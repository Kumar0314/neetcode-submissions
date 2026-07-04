class Solution {
    public int[] replaceElements(int[] arr) {
        
         int n=arr.length;
         int right=-1;
         int []ans=new int [n];
         for(int i=n-1;i>=0;i--){
                 ans[i]=right;

                 right=Math.max(right,arr[i]);
                 



         }
         return ans;

    }
}
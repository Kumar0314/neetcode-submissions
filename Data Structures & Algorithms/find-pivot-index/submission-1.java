class Solution {
    public int pivotIndex(int[] nums) {
        
        // int sum=Arrays.stream(nums).sum();
       
        // int curSum=0;
        // for(int i=0;i<nums.length;i++){
             
        //      if(curSum==(sum-curSum-nums[i])){
        //         return i;
        //      }
        //      curSum+=nums[i];


        // }
        // return -1;
       
       int n=nums.length;

       int []prefix=new int[n+1];
      
       for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+nums[i];
       }
      
       for(int i=0;i<n;i++){
         
       int lS=prefix[i];
       int rS=prefix[n]-prefix[i+1];
       if(lS==rS) return i;
 
       }
       return -1;



    }
}
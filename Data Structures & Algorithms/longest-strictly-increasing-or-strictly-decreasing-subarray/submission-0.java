class Solution {
    public int longestMonotonicSubarray(int[] nums) {
       
       int maxLength=1;

       int len=1;
    //    asc order
       for(int i=1;i<nums.length;i++){
         
         if(nums[i-1]<nums[i]){
            len++;
            maxLength=Math.max(maxLength,len);
         }
         else{
            len=1;
         }
       }

    //    desc order
        for(int i=nums.length-1;i>=1;i--){
         
         if(nums[i-1]>nums[i]){
            len++;
            maxLength=Math.max(maxLength,len);
         }
         else{
            len=1;
         }
       }
        return maxLength; 

        
    }
}
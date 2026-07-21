class Solution {
    public int pivotIndex(int[] nums) {
        
        int sum=Arrays.stream(nums).sum();
       
        int curSum=0;
        for(int i=0;i<nums.length;i++){
             
             if(curSum==(sum-curSum-nums[i])){
                return i;
             }
             curSum+=nums[i];


        }
        return -1;

    }
}
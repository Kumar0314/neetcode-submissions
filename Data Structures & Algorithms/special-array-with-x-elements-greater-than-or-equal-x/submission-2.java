class Solution {
    public int specialArray(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;
        for(int i=0;i<nums.length;i++){
             
             if(i!=0){
                 if(n-i<=nums[i]&&nums[i-1]<(n-i)){
                return n-i;
             }
            


             }

             if(i==0&&n-i<=nums[i]){
                return n-i;
             }
            
            



        }
        return -1;
        
    }
}
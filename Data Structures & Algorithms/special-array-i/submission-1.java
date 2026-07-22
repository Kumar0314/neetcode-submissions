class Solution {
    public boolean isArraySpecial(int[] nums) {
        
        for(int i=0;i<nums.length-1;i++){
            
            if((nums[i]&1)==0){
              if((nums[i+1]&1)==0) return false;
            }
            else{
              if((nums[i+1]&1)==1) return false;
            }

        }
return true;
    }
}
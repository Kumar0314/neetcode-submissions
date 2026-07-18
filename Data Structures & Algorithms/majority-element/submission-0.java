class Solution {
    public int majorityElement(int[] nums) {
        
        // try to implement the majority voting algorithm here for practice
        // it wont work because nums range is more than 2
        // nums length 5*10^4
        // 

        int cnt=1;

        int n=nums[0];

        for(int i=1;i<nums.length;i++){
             
             if(n==nums[i]){
                cnt++;
             }
             else{
                cnt--;
             }

             if(cnt<0){
                cnt=0;
                n=nums[i];
             }

        }
        

        return n;


        

        
    }
}
class Solution {
    public int majorityElement(int[] nums) {
        
        // try to implement the majority voting algorithm here for practice
        // it wont work because nums range is more than 2
        // nums length 5*10^4
        // 

        // int cnt=1;

        // int n=nums[0];

        // for(int i=1;i<nums.length;i++){
             
        //      if(n==nums[i]){
        //         cnt++;
        //      }
        //      else{
        //         cnt--;
        //      }

        //      if(cnt<0){
        //         cnt=0;
        //         n=nums[i];
        //      }

        // }
        

        // return n;
        

        int []bits=new int[32];


        for(int i=0;i<nums.length;i++){
             
             for(int j=0;j<32;j++){
               
               bits[j]+=nums[i]>>j&1;
               

             }

        }

       int num=0;
       for(int i=0;i<32;i++){
       
       if(bits[i]>nums.length/2){
            num|= 1<<i;
       }
       }

       return num;   


        

        
    }
}
class Solution {
    public int removeElement(int[] nums, int val) {
        
        // int i=0,j=1;
        // if(nums.length==0) return 0;  

        // while(i<nums.length&&j<nums.length){

        //   if(nums[i]==val&&nums[j]!=val){
        //         nums[i]=nums[j];
        //         nums[j]=val;
        //         i++;
        //         j++;
        //   }
        //   else if(nums[i]!=val&&nums[j]!=val){
        //       i++;
        //       j++;
        //   }
        //   else if(nums[i]!=val&&nums[j]==val){
        //     i++;
        //   }
        //   else if(nums[i]==val&&nums[j]==val){
        //     j++;
        //   }

        // }


        // for(int ik=0;ik<nums.length;ik++){
        //   if(nums[ik]==val) return ik;
        //   System.out.print(nums[ik]);
        // }
       
        // return nums.length;


        int k=0;
        for(int i=0;i<nums.length;i++){
          if(nums[i]!=val){
            nums[k++]=nums[i];
          }
        }
        return k;

    }

}
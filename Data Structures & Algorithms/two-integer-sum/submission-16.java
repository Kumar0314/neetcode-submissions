class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int[][] a=new int[nums.length][2];
        int n=nums.length;
        for(int i=0;i<n;i++){
            a[i][0]=nums[i];
            a[i][1]=i;
        }

        // Arrays.sort(a,Comparator.comparingInt(i->i[0]));
        Arrays.sort(a,(b,c)->b[0]-c[0]);

        int i=0;
        int j=n-1;
        while(i<j){
           int sum=a[i][0]+a[j][0];
           if(sum==target){
            return new int []{Math.min(a[i][1],a[j][1]),Math.max(a[i][1],a[j][1])};
           }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
        }
        return new int [0];  

    }
}

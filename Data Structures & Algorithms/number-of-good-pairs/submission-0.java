class Solution {
    public int numIdenticalPairs(int[] nums) {

        int n=nums.length;
        Map<Integer,Integer>mpp=new HashMap<>();
        for(int i=0;i<n;i++){
           
           mpp.put(nums[i],mpp.getOrDefault(nums[i],0)+1);

           
        } 
        int ans=0;

        for(Map.Entry<Integer,Integer>e:mpp.entrySet()){
            
            ans+=e.getValue()*(e.getValue()-1)/2;
            
        }
        return ans;
    }
}
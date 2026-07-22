class Solution {
    public boolean divideArray(int[] nums) {
        int n=nums.length;
        if((n&1)==1) return false;
        Map<Integer,Integer>mpp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            mpp.put(nums[i],mpp.getOrDefault(nums[i],0)+1);
        }

        for(Map.Entry<Integer,Integer>e:mpp.entrySet()){
            if((e.getValue()&1)==1) return false;
        }
        return true;
        
    }
}
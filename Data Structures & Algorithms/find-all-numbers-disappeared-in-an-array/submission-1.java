class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        
        List<Integer>res=new ArrayList<>();
        Map<Integer,Integer>mpp=new HashMap<>();
        int l=0;
        int r=nums.length-1;
        while(l<=r){
             mpp.put(nums[l],mpp.getOrDefault(nums[l],0)+1);
             mpp.put(nums[r],mpp.getOrDefault(nums[r],0)+1);
             l++;
             r--;

        }

        for(int i=1;i<=nums.length;i++){
            if(!mpp.containsKey(i)){
                res.add(i);
            }
        }
        return res;
    }
}
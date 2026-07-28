class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        
        Arrays.sort(nums1);
        Arrays.sort(nums2);

        int j=0;
        int i=0;
        int n=nums1.length;
        int m=nums2.length;
        List<Integer>li=new ArrayList<>();
       
        while(i<n&&j<m){

            if((nums1[i]==nums2[j])&&(li.size()==0||nums1[i]!=li.get(li.size()-1))){
                li.add(nums1[i]);
                }

                if(nums1[i]<=nums2[j]){
                    i++;
                }
                else{
                    j++;
                }
               

        }
        return li.stream().mapToInt(Integer::intValue).toArray();




    }
}
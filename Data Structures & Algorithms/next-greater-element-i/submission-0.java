class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {

        int []arr=new int [nums2.length];

        Deque<Integer>q=new ArrayDeque<>();
       for(int i=nums2.length-1;i>=0;i--){
          
          while(!q.isEmpty()&&q.getFirst()<=nums2[i]){
            q.removeFirst();
          }
          if(q.isEmpty()){
            arr[i]=-1;
          }
          else{
            arr[i]=q.getFirst();
          }

          q.addFirst(nums2[i]);
         }
               
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        } 
        
        Map<Integer,Integer>mpp=new HashMap<>();

        for(int i=0;i<nums2.length;i++){
            
            mpp.put(nums2[i],arr[i]);



        }
        int []ans=new int[nums1.length];

        for(int i=0;i<nums1.length;i++){
          
          ans[i]=mpp.get(nums1[i]);

        } 
        return ans;





    }
}
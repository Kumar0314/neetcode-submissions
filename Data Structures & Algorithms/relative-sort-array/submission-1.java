class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {

        int n=arr1.length;
        int m=arr2.length;

        TreeMap<Integer,Integer>mpp=new TreeMap<>();

        for(int i=0;i<n;i++){
           
           mpp.put(arr1[i],mpp.getOrDefault(arr1[i],0)+1);

        }

        int []ans=new int[n];
        int k=0;
        for(int i=0;i<m;i++){
            
            while(mpp.get(arr2[i])!=0){
                ans[k++]=arr2[i];
                mpp.put(arr2[i],mpp.get(arr2[i])-1);
            }
            if(mpp.get(arr2[i])==0){
                mpp.remove(arr2[i]);
            }

            
        }


        while(!mpp.isEmpty()){
            Map.Entry<Integer,Integer>l=mpp.pollFirstEntry();
            int c=l.getValue();
            while(c!=0){

            ans[k++]=l.getKey();
            c--;
            }



        }

        return ans;
        
    }
}
class Solution {
   
   public void mergeSort(int l,int mid,int r,int[] arr){
       
    List<Integer>li=new ArrayList<>();
    
    int i=l;
    int j=mid+1;
    int n=mid;
    int m=r;
   
    while(i<=n&&j<=m){
        
        if(arr[i]<=arr[j]){
            li.add(arr[i]);
            i++;
        }
        else{

            li.add(arr[j]);
            j++;
        }
   


    }

    while(j<=m){
        li.add(arr[j++]);
    }
    while(i<=n){
        li.add(arr[i++]);
    }

    for(int f=l;f<=r;f++){
       
       arr[f]=li.get(f-l);

    }








   }

   public void merge(int l,int r,int []arr){
     
     if(l>=r) return;
     int mid=(l+r)/2;

     merge(l,mid,arr);
     merge(mid+1,r,arr);
     
     mergeSort(l,mid,r,arr);



   }






    public int[] sortArray(int[] nums) {
        merge(0,nums.length-1,nums);
        return nums;
    }
}
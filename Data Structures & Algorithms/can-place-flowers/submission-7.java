class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
       
       int i=0;

       if(n==0) return true;

       if(flowerbed.length==1){
            
            if(flowerbed[0]==0&&n==1)
{
    return true;
}
else{
    return false;
}


       }
       while(i<flowerbed.length){
          
          
          if(i==0&&flowerbed[i+1]==0&&flowerbed[i]==0){
            --n;
            flowerbed[i]=1;
          }
          else if(i==flowerbed.length-1&&flowerbed[i]==0&&flowerbed[i-1]==0){
            --n;
            flowerbed[i]=1;
          }
          else if(i>0&&i<flowerbed.length-1&&flowerbed[i-1]==0&&flowerbed[i+1]==0&&flowerbed[i]==0){
            --n;
            flowerbed[i]=1;

          }
          i++;

          if(n==0) return true;


         System.out.println(n);

       }
      return false;
        
    }
}
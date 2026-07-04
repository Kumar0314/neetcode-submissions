class Solution {
public:
    bool isvalid(int hours,vector<int>& piles,int h ){
       
       int totalhr=0;

       for(int i=0;i<piles.size();i++){
          totalhr+=ceil((double)(piles[i]) / (double)(hours));
           

       }
       if(totalhr<=h) 
          return true;
        
        return false;


    }


    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        
        int ans=e; 
        while(s<=e){
          int mid=(s+e)/2;

          if(isvalid(mid,piles,h)){
               ans=mid;

               e=mid-1;

          }
          else{
            s=mid+1;
          }


        }  
        return ans;
 
    }
};

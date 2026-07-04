class Solution {
public:
    vector<int> countBits(int n) {
         
         vector<int>arr(n+1,0);
         int offset=1;
         for(int i=1;i<=n;i++){
            
            if(offset*2==i){
                offset=i;
            }
            arr[i]=1+arr[i-offset];




         }
        return arr;
    }
};

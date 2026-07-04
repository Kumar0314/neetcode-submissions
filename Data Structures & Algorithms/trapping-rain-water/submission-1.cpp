class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0;
        int rightmax=0;
        int n=height.size();
        int water=0;

        int mi=0;
        int maxi=height[0];
        for(int i=1;i<n;i++){
            if(maxi<height[i]){
                maxi=height[i];
                mi=i;
            }
        }

        // left 
        for(int i=0;i<mi;i++){
          
          if(leftmax>height[i]){
            water+=leftmax-height[i];
          }
          else{
            leftmax=height[i];
          }


        }
        // right
        for(int i=n-1;i>mi;i--){
          
          if(rightmax>height[i]){
            water+=rightmax-height[i];
          }
          else{
            rightmax=height[i];
          }


        }


   return water;
    }
};

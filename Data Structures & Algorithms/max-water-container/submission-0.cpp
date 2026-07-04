class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size(); 
        int maxi=0;
        for(int i=0;i<n;i++){
           int s=i;
           for(int j=i+1;j<n;j++){
             
             int base=(j-i);
             int height=min(heights[i],heights[j]);

             maxi=max(maxi,base*height);
             



           }

        }
    return maxi;


    }
};

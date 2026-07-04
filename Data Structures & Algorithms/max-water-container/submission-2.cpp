class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int maxi=-1;
        int n=heights.size();
        int left=0;
        int right=n-1;

        while(left<right){
          
          int h=min(heights[left],heights[right]);
          
          int b=right-left;
          
          int area=h*b;
          
          if(heights[left]>heights[right]) right--;
          else  left++;
          
          
          maxi=max(maxi,area);



        }
        return maxi;

    }
};

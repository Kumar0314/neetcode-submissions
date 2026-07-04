class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
      int n=nums.size();
      int acts=n*(n+1)/2;
      int prs=0;
      for(int i=0;i<n;i++){
        prs+=nums[i];
       


      }

      if(acts==prs) return 0;

      else{
        return acts-prs;
      }
 



    }
};

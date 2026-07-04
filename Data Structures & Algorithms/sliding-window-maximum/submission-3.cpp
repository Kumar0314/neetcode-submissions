class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         if(k==1) return nums;
         int n=nums.size();
         int i=0;
         int j=k-1;
         vector<int>ans;
         int maxi=INT_MIN;
        
        for(int i=0;i<=n-k;i++){
          int maxi=nums[i];
          for(int j=i;j<i+k;j++){
             if(nums[j]>maxi){

                maxi=max(maxi,nums[j]);
             }


          }
          ans.push_back(maxi);



        }












        return ans;




    }
};

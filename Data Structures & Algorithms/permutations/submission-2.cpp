class Solution {
private: 
      vector<vector<int>>ans;
public:
     
      void permu(int ind, vector<int>& nums) {
        // Base case: If the current index reaches the end of the array
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=ind;i<nums.size();i++){
          
          swap(nums[ind],nums[i]);
          permu(ind+1,nums);

          swap(nums[ind],nums[i]);
 


        }





    }
     

    vector<vector<int>> permute(vector<int>& nums) {
        
    vector<int>ds;
    permu(0,nums);
    return ans;
    }
};

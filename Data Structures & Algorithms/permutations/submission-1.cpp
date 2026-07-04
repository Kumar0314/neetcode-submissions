class Solution {
private: 
      vector<vector<int>>ans;
public:
     
      void permu(int ind, vector<int>& nums) {
        // Base case: If the current index reaches the end of the array
        if (ind == nums.size()) {
            ans.push_back(nums);  // Add the current permutation to the result
            return;
        }
        
        // Explore all possibilities by swapping the current element with every other element
        for (int i = ind; i < nums.size(); i++) {
            swap(nums[ind], nums[i]);  // Swap to generate a new permutation
            permu(ind + 1, nums);      // Recurse for the next element
            swap(nums[ind], nums[i]);  // Backtrack to restore the original array
        }
    }
     

    vector<vector<int>> permute(vector<int>& nums) {
        
    vector<int>ds;
    permu(0,nums);
    return ans;
    }
};

class Solution {
public:
    void helper(int ind,vector<int>& nums,vector<int>&ans,vector<vector<int>>&res){
       if(ind==nums.size()){
        res.push_back(ans);
        return;
       }
    //    take
       ans.push_back(nums[ind]);
       helper(ind+1,nums,ans,res);

       ans.pop_back();

       helper(ind+1,nums,ans,res);



    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        helper(0,nums,ans,res);

        return res;
    }
};

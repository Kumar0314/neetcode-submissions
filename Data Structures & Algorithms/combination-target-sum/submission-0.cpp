class Solution {
public:
    vector<vector<int>>res;
    void helper(int ind,vector<int>& nums,vector<int>&ans,int target){
       if(target==0){
        res.push_back(ans);
        return ;
       }
       if(ind==nums.size()){
        
        return;
       }

       
    //    take
       if(target>=nums[ind]){
       ans.push_back(nums[ind]);

       helper(ind,nums,ans,target-nums[ind]);
       ans.pop_back();

       }


       helper(ind+1,nums,ans,target);



    }
   

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    vector<int>ans;
    helper(0,nums,ans,target);

    return res;


    }
};

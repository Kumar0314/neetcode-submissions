class Solution {
public:
    set<vector<int>>st;

    void helper(int ind,vector<int>& nums,vector<int>&ds){
        if(ind==nums.size()){

        st.insert(ds); 
        return ;
        } 

        
        ds.push_back(nums[ind]);
        helper(ind+1,nums,ds);

        ds.pop_back();

        helper(ind+1,nums,ds);






    } 


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        sort(nums.begin(),nums.end());
        helper(0,nums,ds);
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
        
    }
};

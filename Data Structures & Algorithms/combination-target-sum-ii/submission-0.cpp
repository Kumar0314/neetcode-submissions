class Solution {
public:
    set<vector<int>>st;
    void helper(int ind,vector<int>&ds,vector<int>& candidates,int target){
       if(target==0){
          
          st.insert(ds);

          return;



       }
       if(ind==candidates.size()) return;
       ds.push_back(candidates[ind]);
       helper(ind+1,ds,candidates,target-candidates[ind]);

       ds.pop_back();

       helper(ind+1,ds,candidates,target);



    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        helper(0,ds,candidates,target);
        vector<vector<int>>ans(st.begin(),st.end());

        return ans;
        

    }
};

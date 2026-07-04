class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
       unordered_map<int,int>mpp;

       for(int i=0;i<nums.size();i++){
          mpp[nums[i]]++;


       }
       vector<pair<int,int>>ans;

       for(auto it:mpp){
          ans.push_back({it.second,it.first});

       }
       
       sort(ans.begin(),ans.end());
       vector<int>res;
       int n=ans.size();
       for(int i=0;i<k;i++){
        res.push_back(ans[n-i-1].second);
       }

      
    return res;

    }
};

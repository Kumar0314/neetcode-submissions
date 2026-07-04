class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

          vector<pair<int,int>>arr;

          for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
          }       
          vector<int>ans(2);

          sort(arr.begin(),arr.end());

          int i=0;
          int j=nums.size()-1;

          while(i<j){
             
             if(arr[i].first+arr[j].first==target){
               ans[0]=arr[i].second,ans[1]=arr[j].second;
                sort(ans.begin(),ans.end());
                return ans;
             }

             else if(arr[i].first+arr[j].first>target) j--;
             else i++;



          }

          return {-1};

 


    }
};

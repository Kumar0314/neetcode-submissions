class Solution {
public:
    
    vector<int>helper(int a,int b){
        if(a<=b) return {a,b};
        else return {b,a};
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0;
        int j=nums.size()-1;
        vector<pair<int,int>>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        while(i<j){

        if(arr[i].first+arr[j].first==target) return helper(arr[i].second,arr[j].second);
        else if(arr[i].first+arr[j].first>target) j--;
        else i++;



        }
        return {-1};

    }
};

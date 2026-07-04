class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre;
        vector<int>suff(n,0);
        vector<int>ans(n,0);
        int res=1;
        for(int i=0;i<n;i++){

           res*=nums[i];
           pre.push_back(res);

        }
        res=1;
        for(int i=n-1;i>=0;i--){

           res*=nums[i];
           suff[i]=res;
              
        }

        
 

        ans[0]=suff[1];     
        for(int i=1;i<n-1;i++){
            ans[i]=pre[i-1]*suff[i+1];


        } 
        ans[n-1]=(pre[n-2]);



       return ans;


    }
};

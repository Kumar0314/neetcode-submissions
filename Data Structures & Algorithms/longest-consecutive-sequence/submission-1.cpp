class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int start=-1;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        unordered_map<int,int>mp; 
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]=i;

        }
        int cnt=1;
        int vis[n]={0};
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(!vis[i]){
                vis[i]=1;
                while(mp.find(num+1)!=mp.end()){
                 vis[mp[num+1]]=1;
                 cnt++;
                 num=num+1;

                }
             maxi=max(maxi,cnt);
            }
            cnt=1;

            
        
        } 
        return maxi;
    }
};

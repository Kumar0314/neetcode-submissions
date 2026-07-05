class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>>ans;
        int n=strs.size();

        for(int i=0;i<strs.size();i++){
           
           string key="";
        
           vector<int>alpha(26,0);
           for(int j=0;j<strs[i].size();j++){
              
            alpha[strs[i][j]-'a']++;

           }
           
           for(int k=0;k<26;k++){
            key+="#"+to_string(alpha[k]);
           }
           mpp[key].push_back(strs[i]);

        }

        for(auto it:mpp){
           
           ans.push_back(it.second);

        }

        return ans;


    }
};

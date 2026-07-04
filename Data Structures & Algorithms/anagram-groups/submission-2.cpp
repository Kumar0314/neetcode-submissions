class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++){
           
           string str=strs[i];
           string str2=str;
           sort(str2.begin(),str2.end());

           mpp[str2].push_back(str);


        }
        for(auto it:mpp){
          
          ans.push_back(it.second);

        }
        return ans;

    }
};

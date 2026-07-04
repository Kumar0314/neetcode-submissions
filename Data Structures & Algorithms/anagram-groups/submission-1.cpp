class Solution {
public:
bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;



        
        unordered_map<char,int>mpp;

        for(char c :s){
           mpp[c]++;
        }

        for(char c :t){
           mpp[c]--;
        }

        for(auto it:mpp){
         if(it.second!=0){
            return false;
         }

        }
        return true;

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //   vector<vector<string>>ans;  
    //   int vis[strs.size()]={0};   
    //   for(int i=0;i<strs.size();i++){
    //      vector<string>an;
         
    //      if(vis[i]){
    //         continue;
    //      }
    //      an.push_back(strs[i]);
    //      for(int j=i+1;j<strs.size();j++){
    //       bool is =isAnagram(strs[i],strs[j]);
    //       if(is){
    //         an.push_back(strs[j]);
    //         vis[j]=1;
    //       }

    //      }
    //      ans.push_back(an);
         
    //   }

         




    // return ans;

    unordered_map<string,vector<string>>ans;

    for(auto it:strs){
        vector<int>count(26,0);
        for(char c:it){
            count[c-'a']++;
        }

        string key;
        for(int i:count){
            key+='@'+to_string(i);

        }
        ans[key].push_back(it);

    }
    vector<vector<string>>res;
    for(auto pair:ans){

        res.push_back(pair.second);
    }

    return res;













    }
};

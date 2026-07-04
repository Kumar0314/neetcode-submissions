class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int maxi=INT_MAX;
        string s1=strs[0];
        if(strs.size()==1) return strs[0];
        for(int i=1;i<strs.size();i++){
           
           string s2=strs[i];
           int cnt=0;
           string comm="";
           for(int j=0;j<min(s1.size(),s2.size());j++){
               
               if(s1[j]!=s2[j]){
                
                break;
               }
               else{
                 cnt++;
                 comm+=s1[j];

               }
           }
           if(maxi>cnt){
            ans=comm;
            maxi=cnt;
           }
 

        }


        return ans;

    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.length();
        unordered_map<int,int>mpp;
        int i=0;
        int j=0;
        int cnt=1;
        int maxi=0;
        while(j<n ){
          
          while(mpp.find(s[j])!=mpp.end()){
            
             mpp.erase(s[i]);
             i++;


          }

          if(mpp.find(s[j])==mpp.end()){
            mpp[s[j]]=1;
            cnt=j-i+1;
          }
          maxi=max(maxi,cnt);
          

        j++;

        }


    return maxi;
    }
};

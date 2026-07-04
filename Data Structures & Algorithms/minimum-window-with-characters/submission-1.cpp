class Solution {
public:
    string minWindow(string s, string t) {

      if(t=="" ||t.length()>s.length()) return "";


      int i,j=0;
      int minleft=0;
      int minlen=INT_MAX;

      unordered_map<char,int> ss, tt;

      for(char c: t){
        tt[c]++;
      }

      int required=tt.size();
      int formed=0;

      while(j<s.length()){
         
         char c=s[j];
         ss[c]++;


         if(tt.find(c)!=tt.end()&&tt[c]==ss[c]){
            formed++;
         }

         while(i<=j&&formed==required){
             
             if(j-i+1<minlen){
                minlen=j-i+1;
                minleft=i;
             }
             char leftchar=s[i];
             ss[leftchar]--;
             
             if(tt.find(leftchar)!=tt.end()&&tt[leftchar]>ss[leftchar]){
                formed--;

             }

             i++;



         }

         j++;



      }

      return minlen==INT_MAX?"":s.substr(minleft,minlen);

 




       
        



    }
};

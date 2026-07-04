class Solution {
public:
    bool checkInclusion(string s1, string s2) {
           if(s1.length()>s2.length()) return false;
           vector<int>s1Count(26,0);
           vector<int>s2Count(26,0);

           for(int i=0;i<s1.length();i++){
             
             s1Count[s1[i]-'a']++;
             s2Count[s2[i]-'a']++;
             

           }    
           int matches=0;
           for(int i=0;i<26;i++){
             if (s1Count[i] == s2Count[i]) {
                matches++;

           }
           }
           
           int i=0; 
           int j=s1.size();
           while(j<s2.size()){
           if(matches==26) return true;
        //    add
           int index=s2[j]-'a';

           s2Count[index]++;

           if(s2Count[index]==s1Count[index]){
            matches++;
           }
           else if(s2Count[index]==s1Count[index]+1){
            matches--;
           }

           index=s2[i]-'a';

           s2Count[index]--;
           if(s2Count[index]==s1Count[index]){
            matches++;
           }
           else if(s2Count[index]==s1Count[index]-1){
            matches--;
           }






           

           

           i++;

           j++;

           
           } 
           return (matches==26);
  
    }
};

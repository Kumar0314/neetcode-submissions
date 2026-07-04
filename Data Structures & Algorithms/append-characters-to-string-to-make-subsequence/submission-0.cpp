class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        int i=0,j=0;
        while(i<n&&j<m){
           
           if(s[i]==t[j]){
            i++;
            j++;
           }
           else{              
              i++;
           }
           cout<<i<<" "<<j<<"\n";
        }

        if(j==m) return 0;
        cout<<j<<" "<<m;   
        return m-j;


    }
};
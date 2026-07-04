class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        

        vector<vector<int>>store(n,vector<int>(26,n+1));


        store[n-1][s[n-1]-'a']=n-1;

        for(int k=n-2;k>=0;k--){
            store[k]=store[k+1];
            store[k][s[k]-'a']=k;
        } 


        int i=0;
        int j=0;


        while(i<n&&j<m){
           
           if(store[i][t[j]-'a']==n+1){
            break;
           }
           else{
            i=store[i][t[j]-'a']+1;
            j++;
           }
        }
        



    return m-j;
















    //     int i=0,j=0;
    //     while(i<n&&j<m){
           
    //        if(s[i]==t[j]){
    //         i++;
    //         j++;
    //        }
    //        else{              
    //           i++;
    //        }
    //        cout<<i<<" "<<j<<"\n";
    //     }

    //     if(j==m) return 0;
    //     cout<<j<<" "<<m;   
    //     return m-j;


    }
};
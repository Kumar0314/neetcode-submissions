class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.size() == 1) {
            return strs[0];
        }

        string prefix="";
        sort(strs.begin(),strs.end());
         

        int s=strs.size();

        int n=strs[0].size();
        int m=strs[s-1].size();

        
        for(string str:strs) cout<<str<<"\n";
        int i=0,j=0;
        cout<<strs[0]<<" "<<strs[s-1];
        while(i<n&&j<m){
            
            if(strs[0][i]!=strs[s-1][j]){
                return strs[0].substr(0,i);
            }
            i++,j++;



        }
        return strs[0];

    }
};
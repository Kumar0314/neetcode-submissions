class Solution {
public:
    bool isPalindrome(string str,int st,int en){

       while(st<=en){
         if(str[st]!=str[en]) return false;

         st++;
         en--;


       }
        return true;


    }


    void dfs(string s,int i,vector<string>ds){
         
         if(i==s.size()){
            ans.push_back(ds);
            return;
         }


         for(int ind=i;ind<s.size();ind++){
            
            if(isPalindrome(s,i,ind)){
                
                ds.push_back(s.substr(i,ind-i+1));

                dfs(s,ind+1,ds);

                ds.pop_back();


            }




         }


        




    }

    vector<vector<string>>ans;
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        dfs(s,0,ds);
        return ans;
    }
};

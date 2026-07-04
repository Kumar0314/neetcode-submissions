class Solution {
public:
    void backtrack(vector<string>&result,string res,int open,int close,int max){
      
      if(open==close&&open==max){

        result.push_back(res);
        return ;
      }

      if(open<max){
        backtrack(result,res+'(',open+1,close,max);

      }
      
      if(close<open){

        backtrack(result,res+')',open,close+1,max);
        
      }




    }


    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};

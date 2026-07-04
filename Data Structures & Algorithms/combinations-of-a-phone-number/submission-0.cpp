class Solution {
public:
    vector<string> letterCombinations(string digits) {
          vector<string> res;
        if (digits.empty()) {
            return res;
        }

        unordered_map<char, string> digitToChar = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "qprs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        backtrack(0, digits, "", res, digitToChar);
        return res;



    }

    void backtrack(int i,string digits,string curstr,vector<string>&res,unordered_map<char,string>&digitToChar ){
         
         if(curstr.size()==digits.size()){
            res.push_back(curstr);
            return ;
         }

         for (char c: digitToChar.at(digits[i])){

             backtrack(i+1,digits,curstr+c,res,digitToChar);

         }



    }


};

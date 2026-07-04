class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //valid row
         int n=board.size();
        for(int i=0;i<board.size();i++){
          vector<int>count(10,0);
          for(int j=0;j<n;j++){
            char c=board[i][j];

            if(c!='.'){
                int num=c-'0';
                count[num]++;
                if(count[num]>1){
                    return false;
                }

            } 


 

          }


        }     

        //valid col
        for(int i=0;i<board.size();i++){
          vector<int>count(10,0);
          for(int j=0;j<n;j++){
            char c=board[j][i];

            if(c!='.'){
                int num=c-'0';
                count[num]++;
                if(count[num]>1){
                    return false;
                }

            } 


 

          }


         }     
        // grid
        

        for(int row=0;row<9;row+=3){
           for(int col=0;col<9;col+=3){
             vector<int>count(10,0);
             
             for(int i=row;i<row+3;i++){
               for(int j=col;j<col+3;j++){
                  char c=board[j][i];

            if(c!='.'){
                int num=c-'0';
                count[num]++;
                if(count[num]>1){
                    return false;
                }

               }
 


             }




           }

        }
       
       
        }
        return true;




    }
};

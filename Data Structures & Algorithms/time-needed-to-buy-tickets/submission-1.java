class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
         int cnt=0;
         while(tickets[k]!=0){


            for(int i=0;i<tickets.length;i++){
                
                if(tickets[i]!=0){
                    cnt++;
                    tickets[i]--;
                }
                if(tickets[k]==0){
                    return cnt;
                }


            }






         }
         return cnt;


    }
}
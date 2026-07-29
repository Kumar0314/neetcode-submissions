class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
         int cnt=0;
        //  while(tickets[k]!=0){


        //     for(int i=0;i<tickets.length;i++){
                
        //         if(tickets[i]!=0){
        //             cnt++;
        //             tickets[i]--;
        //         }
        //         if(tickets[k]==0){
        //             return cnt;
        //         }


        //     }






        //  }

        for(int i=0;i<tickets.length;i++){

             if(i<=k){
                cnt+=Math.min(tickets[k],tickets[i]);
             }
             else{
                cnt+=Math.min(tickets[i],tickets[k]-1);
             }




        }




         return cnt;


    }
}
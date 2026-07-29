class Solution {
    public double averageWaitingTime(int[][] customers) {
        
        double time=0;
        int cur=customers[0][0];
        for(int i=0;i<customers.length;i++){
            
            int ar=customers[i][0];
            
            int ti=customers[i][1];
            
            if(cur<ar){
               
               cur=ar;

            }
              cur+=ti;

            time+=(double)(cur-ar);
            System.out.println(cur+" "+time);



        }

        return (double)time/customers.length;





    }
}
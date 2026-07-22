class Solution {
    public int maxScore(String s) {

        int t1=0;
        int t0=0;

        for(int i=0;i<s.length();i++){
             
             if(s.charAt(i)=='1') t1++;
             else{
                t0++;
             }
        }
        int cur0=0;
        int cur1=0;
        int maxi=0;
        for(int i=0;i<s.length()-1;i++){

            if(s.charAt(i)=='1') cur1++;
            else cur0++;
            int points=cur0+t1-cur1;

            maxi=Math.max(maxi,points);







        }
        return maxi;

        



    }
}
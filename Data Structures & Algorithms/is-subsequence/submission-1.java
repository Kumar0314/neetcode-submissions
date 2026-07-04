class Solution {
    public boolean isSubsequence(String s, String t) {
        

        int n=s.length();
        int m=t.length();
        // int i=0,j=0;  
        // while(i<n&&j<m){
          
        //   if(s.charAt(i)==t.charAt(j)) i++;

        //   j++;
        // System.out.println(j+" "+i);
        // }
        // return i==n;
    
       return helper(s,t,n,m,0,0);
    }

    private boolean helper(String s,String t,int n,int m,int i,int j){
            
            if(i==n) return true;

            if(j==m) return false;

            if(s.charAt(i)==t.charAt(j)){
                return helper(s,t,n,m,i+1,j+1);
            }
            else
               return helper(s,t,n,m,i,j+1);



    }
}
class Solution {


    public int minOperations(String s) {

        int n=s.length();

        StringBuilder sb1=new StringBuilder();
        StringBuilder sb2=new StringBuilder();
        sb1.append("0");
        sb2.append("1");

        for(int i=1;i<n;i++){
          int m=sb1.length();
          if(sb1.charAt(m-1)=='0'){
            sb1.append("1");
          }
          else{
            sb1.append("0");
          }
          int k=sb2.length();
          if(sb2.charAt(k-1)=='0'){
            sb2.append("1");
          }
          else{
            sb2.append("0");
          }

          
        }

        int mini=Integer.MAX_VALUE;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){

            if(sb1.charAt(i)!=s.charAt(i)){
                a++;
            }
            if(sb2.charAt(i)!=s.charAt(i)){
                b++;
            }

            


        }



      return Math.min(a,b);

        
    }
}
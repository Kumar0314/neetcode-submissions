class Solution {
    public int numUniqueEmails(String[] emails) {
        
        int n=emails.length;
        Set<String>st=new HashSet<>();
        
        for(int i=0;i<n;i++){

          int add=emails[i].indexOf('@');

          
          String str1=emails[i].substring(0,add);


          int plus=str1.indexOf('+');
          if(plus!=-1){

          str1=str1.substring(0,plus);
          }
          str1=str1.replace(".","");


          String str2= emails[i].substring(add,emails[i].length());

         System.out.println(str1+str2);
          st.add(str1+str2);

        }
        return st.size();


    }
}
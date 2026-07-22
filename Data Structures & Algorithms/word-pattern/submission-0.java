class Solution {
    public boolean wordPattern(String pattern, String s) {

      String[]arr=s.split(" ");
      String []alp=new String[26];
      HashSet<String>st=new HashSet<>();
      if(pattern.length()!=arr.length) return false;

      for(int i=0;i<arr.length;i++){
        
        char ch=pattern.charAt(i);

        if(alp[ch-'a']!=null){
          
          if(!alp[ch-'a'].equals(arr[i])) return false;
        }
        else{
          if(st.contains(arr[i])) return false;
          alp[ch-'a']=arr[i];
          st.add(arr[i]);
        }
   


      }
      return true;
        
    }
}
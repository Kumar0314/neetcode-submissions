class Solution {
    public int firstUniqChar(String s) {
        int []alp=new int[26];

        Arrays.fill(alp,-1);

        for(int i=0;i<s.length();i++){
          
          if(alp[s.charAt(i)-'a']==-1){
            alp[s.charAt(i)-'a']=i;
          }
          else {
            alp[s.charAt(i)-'a']=s.length();
          }

          
        }
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<26;i++){
            if(alp[i]!=-1&&alp[i]!=s.length()){

            mini=Math.min(mini,alp[i]);
            }

        }
        return mini==Integer.MAX_VALUE?-1:mini;
        
    }
}
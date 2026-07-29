class Solution {
    public int[] vowelStrings(String[] words, int[][] queries) {
        
        Set<Character>st=new HashSet<>();

        st.add('a');
st.add('e');
st.add('i');
st.add('o');
st.add('u');
        int []pre=new int[words.length+1];
        
        for(int i=0;i<words.length;i++){
          
           if(st.contains(words[i].charAt(0))&&st.contains(words[i].charAt(words[i].length()-1))){
            pre[i+1]=pre[i]+1;
           }
           else{
            pre[i+1]=pre[i];
           }
           System.out.println(pre[i+1]);

        }
        int [] ans=new int [queries.length];
        for(int i=0;i<queries.length;i++){
            int l=queries[i][0];
            int r=queries[i][1];
            
            ans[i]=pre[r+1]-pre[l];



        }
        return ans;



    }
}
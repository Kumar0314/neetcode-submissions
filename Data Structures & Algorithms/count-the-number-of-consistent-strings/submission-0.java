class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        Set<Character>st=new HashSet<>();
        for(int i=0;i<allowed.length();i++){
           st.add(allowed.charAt(i));
        }
        int cnt=0;
        for(int i=0;i<words.length;i++){
            
            String word=words[i];

            Set<Character>st2=new HashSet<>();
            for(int j=0;j<word.length();j++){
                st2.add(word.charAt(j));
            }
            boolean con=true;
            for(Character ch:st2){
                if(!st.contains(ch)){
                    con=false;
                    break;
                }
            }
            if(con){
                cnt+=1;
            }


        }
        return cnt;


    }
}
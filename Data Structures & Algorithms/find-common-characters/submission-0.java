class Solution {
    public List<String> commonChars(String[] words) {
        
        int []bool=new int[26];

        for(int i=0;i<words[0].length();i++){
            bool[words[0].charAt(i)-'a']++;
        }

       for(String str:words){
         int []inner=new int[26];
         for(int i=0;i<str.length();i++){

            inner[str.charAt(i)-'a']++;

         }

         for(int i=0;i<26;i++){
            bool[i]=Math.min(bool[i],inner[i]);
         }



       }
       List<String>ans=new ArrayList<>();
       for(int i=0;i<26;i++){
        
        for(int j=0;j<bool[i];j++){

           ans.add(String.valueOf((char)(i+'a'))); 

        }
          


       }
       return ans;

    }
}
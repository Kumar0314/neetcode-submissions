class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        
        int []alp= new int[26];

        for(int i=0;i<magazine.length();i++){
            alp[magazine.charAt(i)-'a']++;            
        }
        
        for(int i=0;i<ransomNote.length();i++){
            alp[ransomNote.charAt(i)-'a']--;
            if(alp[ransomNote.charAt(i)-'a']<0){
                return false;
            }
        }
        return true;

    }
}
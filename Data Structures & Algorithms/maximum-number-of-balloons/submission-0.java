class Solution {
    public int maxNumberOfBalloons(String text) {
      
      int []alp =new int[26];

     
      for(int i=0;i<text.length();i++){
        
        alp[text.charAt(i)-'a']++;
      }
      int mini=Integer.MAX_VALUE;

      mini=Math.min(mini,alp['b'-'a']);
      mini=Math.min(mini,alp['a'-'a']);
      mini=Math.min(mini,alp['l'-'a']/2);
      mini=Math.min(mini,alp['o'-'a']/2);
      mini=Math.min(mini,alp['n'-'a']);

    return mini;
    }
}
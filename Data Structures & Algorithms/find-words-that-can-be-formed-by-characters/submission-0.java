class Solution {
    public int countCharacters(String[] words, String chars) {
        int[] alp = new int[26];

        for (int i = 0; i < chars.length(); i++) {
            alp[chars.charAt(i) - 'a']++;
        }
        int ans = 0;
        int[] org = alp.clone();
        for (int i = 0; i < words.length; i++) {
            boolean good = true;
            for (int j = 0; j < words[i].length(); j++) {
                alp[words[i].charAt(j)-'a']--;

                if (alp[words[i].charAt(j)-'a'] < 0) {
                    good = false;
                    break;
                }
            }
           
            if (good) {
                ans += words[i].length();
            }
             for (int k = 0; k< 26; k++) {
                alp[k] = org[k];
            }
        }
        return ans;
    }
}
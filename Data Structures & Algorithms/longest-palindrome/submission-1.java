class Solution {
    public int longestPalindrome(String s) {
        
        Map<Character,Integer>mpp=new HashMap<>();

        for(Character c:s.toCharArray()){
            mpp.put(c,mpp.getOrDefault(c,0)+1);
        }
        int cnt=0;
        for(Map.Entry<Character,Integer>entry:mpp.entrySet()){
             
             if(entry.getValue()%2==1){
                cnt++;
             }

        }
        if(cnt==0){
            return s.length();
        }
        return s.length()-cnt+1;


    }
}
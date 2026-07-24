class Solution {
    public boolean makeEqual(String[] words) {

        Map<Character,Integer>mpp=new HashMap<>();

        for(int i=0;i<words.length;i++){

            for(int j=0;j<words[i].length();j++){

                mpp.put(words[i].charAt(j),mpp.getOrDefault(words[i].charAt(j),0)+1);
            }
        }
        for(Map.Entry<Character,Integer>entry:mpp.entrySet()){
             
             if(entry.getValue()%words.length!=0){
                 System.out.print(entry.getKey());
                 System.out.print(entry.getValue());

                return false;
             }

        }
        return true;
    }
}
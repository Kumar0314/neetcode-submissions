class Solution {
    public boolean isIsomorphic(String s, String t) {
       
       if(s.length()!=t.length()){
        return false;
       }

       HashMap<Character,Character>mpp=new HashMap<>();

       for(int i=0;i<s.length();i++){
         
        if(mpp.containsKey(s.charAt(i))){
            if(mpp.get(s.charAt(i))!=t.charAt(i)){
                 return false;
            }
        }
        else{
           
           if(mpp.containsValue(t.charAt(i))){
            return false;
           }


            mpp.put(s.charAt(i),t.charAt(i));
        }



       }


return true;
        
    }
}
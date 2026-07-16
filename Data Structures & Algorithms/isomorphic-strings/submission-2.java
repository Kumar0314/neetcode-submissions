class Solution {
    public boolean isIsomorphic(String s, String t) {
       
       if(s.length()!=t.length()){
        return false;
       }

    //    HashMap<Character,Character>mpp=new HashMap<>();

    //    for(int i=0;i<s.length();i++){
         
    //     if(mpp.containsKey(s.charAt(i))){
    //         if(mpp.get(s.charAt(i))!=t.charAt(i)){
    //              return false;
    //         }
    //     }
    //     else{
           
    //        if(mpp.containsValue(t.charAt(i))){
    //         return false;
    //        }


    //         mpp.put(s.charAt(i),t.charAt(i));
    //     }

    // solution 2

    HashMap<Character,Character>mpp=new HashMap<>();
    HashMap<Character,Character>mpp2=new HashMap<>();


    for(int i=0;i<s.length();i++){
        Character c1=s.charAt(i);
        Character c2=t.charAt(i);
        if(mpp.containsKey(c1)&&mpp.get(c1)!=c2||mpp2.containsKey(c2)&&mpp2.get(c2)!=c1){
            return false;
        }


        mpp.put(c1,c2);
        mpp2.put(c2,c1);

    }

     return true;






       



        
    }
}
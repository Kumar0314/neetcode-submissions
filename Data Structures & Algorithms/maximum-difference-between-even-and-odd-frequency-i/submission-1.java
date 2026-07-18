class Solution {
    public int maxDifference(String s) {

        int []alpha=new int [26];

        for(int i=0;i<s.length();i++){

            alpha[s.charAt(i)-'a']++;
            
        }
        List<Integer>helper=new ArrayList<>();

        for(int i=0;i<26;i++){
            
            if(alpha[i]!=0){
                helper.add(alpha[i]);
            }

        }

        int lof=Integer.MAX_VALUE;
        int hof=0;
        int lef=Integer.MAX_VALUE;
        int hef=0;

        for(int i=0;i<helper.size();i++){
            System.out.print(helper.get(i));
            if(helper.get(i)%2==0){
               
               if(helper.get(i)>hef){
                hef=helper.get(i);
               }
               if(helper.get(i)<lef){
                lef=helper.get(i);
               }

            }
            else{
                
                 
               if(helper.get(i)>hof){
                hof=helper.get(i);
               }
               if(helper.get(i)<lof){
                lof=helper.get(i);
               }

            }

            


        }
        lof=lof==Integer.MAX_VALUE?0:lof;
        lef=lef==Integer.MAX_VALUE?0:lef;

        System.out.print("\n");
        System.out.println(lof+" "+hof+"  "+lef+"  "+hef);
        return hof-lef;
        
    }
}
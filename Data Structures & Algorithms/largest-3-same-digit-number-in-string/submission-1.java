class Solution {
    public String largestGoodInteger(String num) {
        int []number=new int[10];
        int maxi=-1;
        for(int i=0;i<num.length()-2;i++){
            
            String n=num.substring(i,i+3);
            for(int j=0;j<3;j++){
               number[n.charAt(j)-'0']++;
            }
            int cnt=0;
            for(int j=0;j<10;j++){
                if(number[j]!=0) cnt++;
                if(cnt>1){
                    break;
                }
            }
            if(cnt==1){
                maxi=Math.max(maxi,Integer.parseInt(n));
            }

            Arrays.fill(number,0);



        }
        if(maxi==-1) return "";
        if(maxi==0) return "000";
        return String.valueOf(maxi);

           
    }
}
class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {


        
        List<Integer> [] li=new ArrayList[26];
        for(int i=0;i<26;i++){
            li[i]=new ArrayList<Integer>();
        }
        for(int i=0;i<s.length();i++){
            
            li[s.charAt(i)-'a'].add(i);          


        }
        int cnt=-1;
        for(int i=0;i<26;i++){

            if(li[i].size()==1||li[i].size()==0){
                continue;
            }
            else{
                cnt=Math.max(cnt,li[i].get(li[i].size()-1)-li[i].get(0)-1);
            }

        }
        return cnt;
    }
}
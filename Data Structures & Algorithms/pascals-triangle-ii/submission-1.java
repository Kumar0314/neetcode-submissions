class Solution {
    public List<Integer> getRow(int rowIndex) {

        // ncr

        List<Integer>ans=new ArrayList<>();

        if(rowIndex==0){
            return new ArrayList<>(List.of(1));

        }
        if(rowIndex==1){
            return new ArrayList<>(List.of(1,1));
        }
        
        long res=1;
        ans.add(1);
        for(int i=1;i<=rowIndex;i++){

            res=res*(rowIndex-i+1)/i;
            ans.add((int)res);


        }
        return ans;

        
    }
}
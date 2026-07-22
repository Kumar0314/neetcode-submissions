class Solution {
    public boolean isPathCrossing(String path) {
        
        List<List<Integer>>arr=new ArrayList<>();

        arr.add(List.of(0,0));

        for(int i=0;i<path.length();i++){

           List<Integer>a=(arr.get(i));
           int x=a.get(0);
           int y=a.get(1);
           if(path.charAt(i)=='N'){
            y+=1;

           }
              
           else if(path.charAt(i)=='E'){
            x+=1;

           }
           else if(path.charAt(i)=='W'){
            x-=1;
           }
           else{
            y-=1;
           }
           
             if(arr.contains(List.of(x,y))){
            //   if(i==path.length()-1) return false;
             return true;
             } 
            arr.add(List.of(x,y));
           

        }
        return false;


    }
}
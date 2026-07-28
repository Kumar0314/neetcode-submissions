class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        
      int []count=new int[2];

      for(int stu:students){
        count[stu]++;
      }

      for(int i=0;i<students.length;i++){
         
         if(count[sandwiches[i]]==0){
            return count[0]+count[1];
         }
         count[sandwiches[i]]--;


      }
      return 0;

    }
}
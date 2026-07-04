class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
     unordered_map<char,int>mpp;
     for(char it:tasks){
        mpp[it]++;
     }   
     priority_queue<int>maxHeap;
     queue<pair<int,int>>q;

     for(auto it:mpp){
      maxHeap.push(it.second);


     }

     int time=0;
     
     while(!maxHeap.empty()||!q.empty()){

      if(!q.empty()&&time>=q.front().second){
        
        maxHeap.push(q.front().first);

        q.pop();





      }
      
      if(!maxHeap.empty()){
        int cnt=maxHeap.top()-1;


        maxHeap.pop();

        if(cnt>0){
          q.push({cnt,time+1+n});

        }  
 



      }
      time++;






     }

     return time;




    }
};

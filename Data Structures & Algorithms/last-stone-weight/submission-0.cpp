class Solution {
public:
    priority_queue<int>pq;
    int lastStoneWeight(vector<int>& stones) {
        for(int nums:stones){
          pq.push(nums);


        }

        while(pq.size()>1){
           
           int a=pq.top();
           pq.pop();
           
           int b=pq.top();
           pq.pop();
           
           if (a != b) {
            pq.push(a - b);
        }


        }
        if(pq.empty()) return 0 ;
        return pq.top();

    }
};

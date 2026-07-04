class MedianFinder {
public:
    priority_queue<int>lower;
    priority_queue<int,vector<int>,greater<int>>higher;



    MedianFinder() {
                
    }
    
    void addNum(int num) {
         if(lower.empty()){
           lower.push(num);

           return ;

         }


         if(lower.size()>higher.size()){
             if(lower.top()>num){
                higher.push(lower.top());
                lower.pop();
                lower.push(num);
  

              
                }
              else {
                higher.push(num);
              } 




         }
         else{
             if(higher.top()<num){
                lower.push(higher.top());
                higher.pop();
                higher.push(num);


             }

             else{
                lower.push(num);
             }



         }



    }
    
    double findMedian() {
         double res=0.0;

         if(lower.size()==higher.size()){
          
          res = lower.top() + (higher.top() - lower.top()) / 2.0;

         }
         else if(lower.size()>higher.size()){

            res=lower.top();
         }
         else{
            res=higher.top();
         }
         return res;




    }
};

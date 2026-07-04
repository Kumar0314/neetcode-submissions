class Solution {
public:
    bool isValid(string s) {
     stack<char>st;
     st.push(s[0]);
     for(int i=1;i<s.length();i++){
        if(!st.empty()){
        char t=st.top();
         if (s[i] == ')' && t == '(') {
                    st.pop();
                } 
                else if (s[i] == ']' && t == '[') {
                    st.pop();
                } 
                else if (s[i] == '}' && t == '{') {
                    st.pop();
                } 
                else {
                    st.push(s[i]);
                }



        }


       
        else{
            st.push(s[i]);
        }

        


      
        




     }
    //  while (!st.empty()) {
    //     cout<<(st.top())<<" ";
    //     st.pop();
    // }

    //  cout<<st.size();
     if(st.size()!=0) return false;
      return true;


    }
};

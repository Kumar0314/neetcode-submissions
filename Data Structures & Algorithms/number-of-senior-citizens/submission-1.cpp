class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int cnt=0;
        int n=details.size();
        for(int i=0;i<n;i++){
            
            int a=(details[i][11]-'0');
            int b=(details[i][12]-'0');

            if((a*10+b)>60) cnt++;
            
            

        }

        return cnt;

    }
};
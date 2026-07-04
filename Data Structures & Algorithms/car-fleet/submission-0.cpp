class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;
        
        // Calculate the time each car takes to reach the target and store it
        for (int i = 0; i < n; ++i) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        
        // Sort cars based on their starting position in descending order
        sort(cars.begin(), cars.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
            return a.first > b.first;
        });


        int fleets=0;
        double last=0;
        for(auto &car:cars){
          if(last <car.second){

            last=car.second;
            fleets++;
          }

 

        }
        return fleets;
    }
};

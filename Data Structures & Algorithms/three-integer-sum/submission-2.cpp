class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
           vector<vector<int>> res;
        int n = nums.size();

        // Sort the array to use two pointers method
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // Skip the same `i` element to avoid duplicates
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    res.push_back({nums[i], nums[j], nums[k]});

                    // Move j and k to the next different elements
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;

                    j++;
                    k--;
                } else if (sum > 0) {
                    k--;
                } else {
                    j++;
                }
            }
        }

        return res;


    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int i = 0;
        int j = nums.size() - 1;

        while (i <= j) {
            int mid = (i + j) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Check if the left side is sorted
            if (nums[i] <= nums[mid]) {
                if (nums[i] <= target && target < nums[mid]) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            }
            // Otherwise, the right side must be sorted
            else {
                if (nums[mid] < target && target <= nums[j]) {
                    i = mid + 1;
                } else {
                    j = mid - 1;
                }
            }
        }

        return -1;


    }
};

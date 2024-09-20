class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;  // Initialize mid in each loop iteration
            
            if (nums[mid] == target) {
                return mid;
            }
            
            // Check if the left half is sorted
            if (nums[mid] >= nums[start]) {
                // Target is in the left sorted portion
                if (nums[start] <= target && nums[mid] > target) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } 
            // Else the right half must be sorted
            else {
                // Target is in the right sorted portion
                if (nums[mid] < target && nums[end] >= target) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

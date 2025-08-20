//-------O(logN)--------
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> check;
        int n = nums.size();
        int low = 0, high = n - 1, mid;

        
        int first = -1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1; 
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        
        low = 0, high = n - 1;
        int last = -1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1; 
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        check.push_back(first);
        check.push_back(last);
        return check;
    }
};

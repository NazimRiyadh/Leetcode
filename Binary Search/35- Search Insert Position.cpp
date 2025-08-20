//-----O(logN)--------
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=(high+low)/2;
        while(low<=high)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        mid=(high+low)/2;
        }
    if(nums[mid]<target)
    {
        return mid+1;
    }
    else
    {
        if(mid==0)
        {
            return 0;
        }
        else
        {
        return mid-1;
        }
    }
    return mid;
    }
};
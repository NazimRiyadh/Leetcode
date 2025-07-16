//---------O(n^2)------------
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};


//----------O(nlogn)-------------
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
};


//-------O(n)----------------------
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int>check;
        for(auto it: nums)
        {
            check.insert(it);
        }
        if(check.size()!=nums.size())
        {
            return true;
        }
        else
            return false;
    }
};


//----O(n)------------
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    int n=nums.size();
    unordered_set<int> check;
    for(auto it: nums)
    {
        check.insert(it);
    }

    int longest=0;
    for(auto it: check)
    {
        if(check.find(it-1)==check.end())
        {
            int current=0;
            while(check.find(it+current)!=check.end())
            {
                current++;
            }
            longest=max(longest, current);
        }
    }
    return longest;
    }
};

//O(nlogn) can be done with sorting

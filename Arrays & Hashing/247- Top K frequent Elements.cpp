//--------O(nlogn)------------
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> track;

        for(int i=0; i<nums.size(); i++)
        {
            track[nums[i]]++;
        }

        vector<pair<int, int>> riyadh;
        for(auto it: track)
        {
            riyadh.push_back({it.second, it.first});
        }

        sort(riyadh.begin(), riyadh.end(), greater<pair<int,int>>());

        vector<int> result;
        for(int i=0; i<k; i++)
        {
            result.push_back(riyadh[i].second);
        }
    return result;
    }
};

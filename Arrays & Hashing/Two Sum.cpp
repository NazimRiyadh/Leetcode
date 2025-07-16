//----------O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> main;
        //inserting the values as key and index as value
        for(int i=0; i<nums.size(); i++)
        {
            main.insert({nums[i], i});
        }


        for(int i=0; i<nums.size() ; i++)
        {
          int comp= target-nums[i];//Complement of current number
          auto find=main.find(comp);//finding if it is the map
            if(find!= main.end() && find->second!=i)
            {
                return {i, find->second};//return the indexes if in the map
            }
        }
        return {};
    }
};
/*
| Syntax                             | Type of `it` | Access with               |
| ---------------------------------- | ------------ | ------------------------- |
| for (auto it : map)              | pair<K, V>| `it.first`, `it.second`   |
| for (auto it = map.begin(); ...) | iterator` | `it->first`, `it->second` |
*/

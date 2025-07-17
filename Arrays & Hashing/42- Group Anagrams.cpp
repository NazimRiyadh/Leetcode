//----O(N × K log K)------
//N=size of the vector. k= size of strings
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string, vector<string>> result;

     for(int i=0; i<strs.size(); i++)
     {
        string key=strs[i];
        sort(key.begin(), key.end());
        result[key].push_back(strs[i]);
     }


      vector<vector<string>> answer;
      for(auto it: result)
      {
        answer.push_back(it.second);
      }
      return answer;
    }
};

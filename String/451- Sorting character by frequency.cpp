//-------O(NlogN)-------

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Step 1: Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Put (char, frequency) into a vector
        vector<pair<char, int>> vec(freq.begin(), freq.end());

        // Step 3: Sort vector by frequency in descending order
        sort(vec.begin(), vec.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });

        // Step 4: Build the result string
        string result = "";
        for (auto it : vec) {
            result += string(it.second, it.first);  // repeat character by its frequency
        }

        return result;
    }
};

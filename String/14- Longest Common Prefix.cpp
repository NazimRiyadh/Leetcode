//------O(O(N log N))----------
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        sort(strs.begin(), strs.end());  // O(N log N)

        string first = strs.front();
        string last = strs.back();

        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            ++i;
        }

        return first.substr(0, i);
    }
};

//-------O(N * M)---------
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Step 1: Find the minimum string length among all strings
        int minLen = strs[0].size();
        for (int i = 1; i < strs.size(); ++i) {
            minLen = min(minLen, (int)strs[i].size());
        }

        // Step 2: Compare characters at each position up to minLen
        for (int i = 0; i < minLen; ++i) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != ch) {
                    return strs[0].substr(0, i);
                }
            }
        }

        // All characters matched up to minLen
        return strs[0].substr(0, minLen);
    }
};

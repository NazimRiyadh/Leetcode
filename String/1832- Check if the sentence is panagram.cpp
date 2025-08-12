//-----O(N)------
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26];
        bool flag=true;
        int n=sentence.size();
        for(int i=0; i<n; i++)
        {
            freq[sentence[i]-'a']++;
        }
        for(int i=0; i<26; i++)
        {
            if(freq[i]==0)
            {
                flag=false;
                return flag;
            }
        }
    return flag;
    }
};
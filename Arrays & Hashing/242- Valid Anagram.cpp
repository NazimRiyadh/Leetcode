//-------O(n)---------
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>check(26,0);

        if(s.size()!=t.size())
        {
            return false;
        }

        for(int i=0; i<s.size(); i++)
        {   
            check[s[i]-'a']++;
        }

        for(int i=0; i<t.size(); i++)
        {
            check[t[i]-'a']--;
        }
        
        for(int i=0; i<26; i++)
        {
            if(check[i]!=0)
                return false;
        }
        return true;

    }
};	

//------------O(nLOGn)-----------
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s.size()!=t.size())
        {
            return false;
        }

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};

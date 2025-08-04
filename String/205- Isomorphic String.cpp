//----O(n)-------
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>st;
        unordered_map<char, char>ts;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            char ss=s[i];
            char tt=t[i];

            if(st.count(ss))
            {
                if(st[ss]!=tt)
                {
                    return false;
                }
            }
            else
            {
                st[ss]=tt;
            }

            if(ts.count(tt))
            {
                if(ts[tt]!=ss)
                {
                    return false;
                }
            }
            else
            {
                ts[tt]=ss;
            }
        }
        return true;
    }
};

/*
Bruteforce approach

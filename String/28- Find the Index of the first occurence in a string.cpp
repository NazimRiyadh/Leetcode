//-------O(M*N)-------
//N-main string size, M= target string size
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        for(int i=0; i<n; i++)
        {
            if(haystack[i]==needle[0] && (i+m-1)<n)
            {
                string s=haystack.substr(i,m);
                if(s==needle)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
//------O(n)--------
class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maxx=0; 
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
            if(s[i]==')')
            {
                count--;
            }
            maxx= max(count, maxx);
        }
    return maxx;
    }
};
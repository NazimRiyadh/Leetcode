//-----o(N)---------
class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        stack<int>check;
        if(n==0)
        {
            return 0;
        }
       for(int i=0; i<n; i++)
       {
        if(s[i]=='(')
        {
            check.push(s[i]);
        }
        else
        {
            if(!check.empty() && check.top()=='(')
            {
                check.pop();
            }
            else
            {
                check.push(s[i]);
            }
        }
    }
     return check.size();
    }
};

//----------O(N) with stack----------
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

//------O(N) with no extra space------
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int close=0;
        int n=s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else
            {
                if(open==0)
                {
                    close++;
                }
                else
                {
                    open--;
                }
            }
        }
    return (open+close);
    }
};
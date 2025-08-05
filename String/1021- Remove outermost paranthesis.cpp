//--------O(n)----------
class Solution {
public:
    string removeOuterParentheses(string s) {
       string check="";
       int count=0;
       int n=s.size();
       for(int i=0;  i<n; i++)
       {
        if(s[i]==')')count--;
        if(count!=0)
        {
            check.push_back(s[i]);
        }
        if(s[i]=='(')count++;
       }
     return check;   
    }
};
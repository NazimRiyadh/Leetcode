//------------O(n)---------
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        bool flag=false;
        int n=s.size();
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]!=' ')
            {
                flag=true;
                ans+=s[i];
            }
            else
            {
                if(flag==true)
                {
                    ans+=s[i];
                    flag=false;
                }   
            }         
        }
        ans+=' ';
        int i=0;
        for(int j=0; j<ans.size(); j++)
        {
            if(ans[j]==' ')
            {
                reverse(ans.begin() + i, ans.begin() + j);
                i=j+1;
            }
        }
        while (!ans.empty() && ans.back() == ' ') {
         ans.pop_back();
        }

        return ans;
    }
};



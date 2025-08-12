//------O(N^2)------
class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        bool flag= false;
        for(int i=0; i<n; i++)
        {
            char ch=s[i];
            flag=false;
            for(int j=0; j<n; j++)
            {
                if(ch==s[j] && i!=j)
                {
                    flag=true;
                    break;
                }
            }
             if(flag==false)
                {
                    return i;
                }
        }
    return -1;
    }
};